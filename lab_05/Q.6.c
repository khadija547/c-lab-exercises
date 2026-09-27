#include <stdio.h>

int main() {
    int problem, algo;
    printf("1.Classification 2.Regression 3.Clustering 4.Computer Vision\nSelect Problem: ");
    scanf("%d", &problem);

    switch(problem){
        case 1: printf("1.Logistic Regression 2.Decision Tree 3.KNN\nSelect: "); scanf("%d",&algo);
                switch(algo){ case 1: printf("Selected Logistic Regression\n"); break; case 2: printf("Decision Tree\n"); break; case 3: printf("KNN\n"); break; } break;
        case 2: printf("1.Linear Reg 2.Polynomial Reg 3.SVR\nSelect: "); scanf("%d",&algo);
                switch(algo){ case 1: printf("Linear Regression\n"); break; case 2: printf("Polynomial\n"); break; case 3: printf("SVR\n"); break; } break;
        case 3: printf("1.K-Means 2.Hierarchical 3.DBSCAN\nSelect: "); scanf("%d",&algo);
                switch(algo){ case 1: printf("K-Means\n"); break; case 2: printf("Hierarchical\n"); break; case 3: printf("DBSCAN\n"); break; } break;
        case 4: printf("1.CNN 2.YOLO 3.R-CNN\nSelect: "); scanf("%d",&algo);
                switch(algo){ case 1: printf("CNN\n"); break; case 2: printf("YOLO\n"); break; case 3: printf("R-CNN\n"); break; } break;
    }
    return 0;
}