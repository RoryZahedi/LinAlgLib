#ifndef ZAHEDI_H
#define ZAHEDI_H

#include <stdexcept>
#include <vector>
#include <iostream>

class Matrix{
    public:
        //[1,2,3][3,2,1][5,6,7]}   
        Matrix(std::vector<std::vector<double> > input){
            rows = input.size();
            std::cout << "ROWS = " << rows << std::endl;
            columns = input[0].size(); 
            std::cout << "columns = " << columns << std::endl;
            for(size_t i = 0; i<rows; i++){
                if(input[i].size() != columns){
                    std::cout << "bruhhh" << std::endl;
                    throw std::invalid_argument( "Invalid Matrix Configuration");
                }
                std::cout << "hi";
                for(size_t j = 0; j<input[i].size();j++){
                    std::cout << "hi";
                    // std::cout << input[i][j] << " ";
                    // data[i][j] = input[i][j];              
                }
            }
        }
        Matrix(size_t m, size_t n){ //zero matrix
            rows = m;
            columns = n;
            for(size_t i = 0; i<m; i++){
                for(size_t j = 0; j<n; j++){
                    data[i][j] = 0;
                }
            }
        }
        Matrix(size_t id){
            //do stuff
        }
        ~Matrix(){} 
        double& operator()(size_t i, size_t j){
            if(i > rows || j>columns){
                throw std::invalid_argument( "Invalid indexing" );
            }
            return data[i][j];
        }
        Matrix(const Matrix& m1); 
        Matrix& operator*(Matrix&  M2){} 
        Matrix& operator+(Matrix& M2){} 
        void displayMatrix(){
            for(size_t i = 0; i<rows; i++){
                for(size_t j = 0; j<columns; j++){
                    if(j == 0){
                        std::cout << "|" << " ";
                    }
                    std::cout << data[i][j] << " ";
                }
            std::cout << "|\n";
            }
        }

    private:
         size_t rows;
         size_t columns;
        std::vector<std::vector<double> > data;

};


#endif