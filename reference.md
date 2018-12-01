g++ -o http_get http_get.cc -lPocoNet -lPocoFoundation

[root@localhost testpoconet]# ./http_get http://192.168.57.3:3000
./http_get: error while loading shared libraries: libPocoNet.so.60: cannot open shared object file: No such file or directory

https://blog.csdn.net/lu_embedded/article/details/56675653
https://bbs.csdn.net/topics/300005691
