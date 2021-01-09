 #include <iostream>
 using namespace std;
        
int nod ( int m, int n) {
    int result;
                
    if ( n == 0 ){
        result = m;
    }  
    else if ( n > m ){
        result = nod ( n, m ) ;
    }                
    else {
        result = nod ( n, m % n);
    }               
                
    return result;
}
        
int main() {
    int m, n;
                
        do{
            cout << " m= ";
            cin >> m;

            cout << "n = ";
            cin >> n;

        } while ( m < 0 || n < 0 || ( m == 0 && n == 0 ) );
                
        cout<<"\n NOD = "<< nod ( m, n ) << endl;

    return 0;
}
