using namespace std;

/*  
    variaveis que eram pra ser double estao como long long int pra evitar operacoes de ponto flutuante 
    o limite de tempo da questão é bem apertado  
*/ 

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n, area;
    cin >> n >> area;

    while(n != 0 && area != 0) {
        vector<long long int> tiras(n);
        long long int sum = 0;

        for(long long int i = 0; i < n; i++) {
            cin >> tiras[i];
            sum += tiras[i];
        }

        if(sum == area) cout << ":D\n";
        else if(sum < area) cout << "-.-\n";
        else {
            sort(tiras.begin(), tiras.end());

            long long int sumCut = 0;
            double cut;

            for(long long int i = n-1; i >= 0; i--) {
                long long int div = n - i;
                double cutEach = (double)(area - sumCut)/div; // unica operacao que fica com ponto flutuante

                if(i != 0 && cutEach > (tiras[i] - tiras[i-1])) sumCut+=(tiras[i] - tiras[i-1])*div;
                else {
                    cut = tiras[i] - cutEach;
                    break;
                }
            }
            cout << fixed << setprecision(4) << cut << '\n';
        }
        cin >> n >> area;
    }

    return 0;
}