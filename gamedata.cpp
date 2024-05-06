#include "gamedata.h"

GameData::GameData()
{
    //存储地图数据
    QVector<QVector<int>> vec;

    //第一关配置数据
    int arr1[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,2,5,0,0,0},
        {0,0,0,0,0,0,0,2,2,0,0,0},
        {0,0,0,2,2,2,4,2,0,0,0,0},
        {0,0,0,2,2,4,2,4,0,0,0,0},
        {0,0,2,2,0,0,0,0,0,0,0,0},
        {0,0,2,1,2,2,1,2,0,0,0,0},
        {0,0,2,1,2,1,2,2,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr1[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(1,22);
    mData.insert(1,vec);

    //第二关
    vec.clear();//先清空
    int arr2[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,2,2,2,2,0,0,0,0,0,0},
        {0,0,4,0,8,8,0,0,0,0,0,0},
        {0,2,8,0,0,1,1,1,0,0,0,0},
        {0,2,2,0,0,2,8,2,0,0,0,0},
        {0,5,2,0,0,2,4,2,0,0,0,0},
        {0,0,0,0,0,3,2,4,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0}
    };

    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr2[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(2,24);
    mData.insert(2,vec);

    //第三关
    vec.clear();//先清空
    int arr3[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,3,2,2,2,0,0,0},
        {0,0,0,0,0,0,0,0,11,0,0,0},
        {0,0,0,0,2,8,8,2,2,5,0,0},
        {0,0,0,0,8,0,8,0,2,2,0,0},
        {0,0,0,0,2,2,4,8,8,0,0,0},
        {0,0,10,0,8,0,8,0,2,0,0,0},
        {0,0,2,2,2,2,2,4,2,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };

    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr3[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(3,33);
    mData.insert(3,vec);

    //第四关
    vec.clear();//先清空
    int arr4[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,5,0,10,2,1,0,0,0,0,0,0},
        {0,2,1,8,1,2,11,2,0,0,0,0},
        {0,1,2,1,2,1,1,2,3,0,0,0},
        {0,2,1,2,1,2,1,1,2,0,0,0},
        {0,0,2,1,2,1,2,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };

    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr4[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(4,20);
    mData.insert(4,vec);

    //第五关
    vec.clear();//先清空
    int arr5[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,2,3,0,0,0,0,0},
        {0,0,0,0,2,11,1,2,0,0,0,0},
        {0,0,5,0,8,2,1,2,0,0,0,0},
        {0,0,2,0,2,8,2,8,0,0,0,0},
        {0,0,4,0,1,1,1,1,0,0,0,0},
        {0,0,8,2,8,2,2,8,0,0,0,0},
        {0,0,0,0,0,0,0,10,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr5[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(5,25);
    mData.insert(5,vec);

    //第六关
    vec.clear();//先清空
    int arr6[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,2,5,8,0,0,0,0,0,0},
        {0,0,0,1,1,2,0,0,0,0,0,0},
        {0,0,2,2,2,10,0,0,0,0,0,0},
        {0,0,0,8,1,2,2,0,0,0,0,0},
        {0,0,0,4,0,1,1,2,2,0,0,0},
        {0,0,0,2,2,1,2,4,0,0,0,0},
        {0,0,0,0,0,0,11,1,2,0,0,0},
        {0,0,0,0,0,0,2,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr6[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(6,24);
    mData.insert(6,vec);

    //第七关
    vec.clear();//先清空
    int arr7[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,2,0,0,0},
        {0,0,0,0,0,0,0,2,11,2,0,0},
        {0,0,0,0,2,10,0,1,1,1,0,0},
        {0,0,0,0,4,1,2,4,1,2,0,0},
        {0,0,0,0,2,0,4,2,2,5,0,0},
        {0,0,0,0,8,0,0,8,0,0,0,0},
        {0,0,0,0,8,8,8,8,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr7[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(7,44);
    mData.insert(7,vec);

    //第八关
    vec.clear();//先清空
    int arr8[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,2,3,2,0,0,0,0},
        {0,0,0,0,2,2,2,2,18,0,0,0},
        {0,0,0,0,2,2,2,2,18,0,0,0},
        {0,0,0,0,2,2,2,2,18,0,0,0},
        {0,0,0,0,2,1,1,1,0,0,0,0},
        {0,0,0,5,2,2,2,2,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr8[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(8,20);
    mData.insert(8,vec);

    //第九关
    vec.clear();//先清空
    int arr9[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,10,18,1,18,18,18,0,0,0,0},
        {0,0,2,2,2,2,2,2,0,0,0,0},
        {0,2,1,2,2,1,2,2,0,0,0,0},
        {0,2,2,2,1,2,1,2,0,0,0,0},
        {0,0,2,2,5,2,2,2,11,3,0,0},
        {0,0,0,0,0,0,0,2,1,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr9[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(9,26);
    mData.insert(9,vec);

    //第十关
    vec.clear();//先清空
    int arr10[12][12]={
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,9,0,0,0,0,0,0},
        {0,0,0,0,1,11,2,0,0,0,0,0},
        {0,0,1,0,1,2,2,0,2,0,0,0},
        {0,1,2,2,1,1,1,2,2,10,0,0},
        {0,2,1,1,1,2,2,1,1,2,0,0},
        {0,0,5,2,1,2,2,1,2,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0},
    };
    for(int i=0; i<12; i++)
    {
        QVector<int> vec1;
        for(int j=0; j<12; j++)
        {
            vec1.push_back(arr10[i][j]);
        }
        vec.push_back(vec1);
    }
    mstep.insert(10,18);
    mData.insert(10,vec);
}
