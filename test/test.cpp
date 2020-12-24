#include "ctest.h"
#include "../src/FileManager.h"

CTEST(FileManager, move_f)
{

    int expected = 0;
    int result = move_f("test/test_resource/test1.txt", "test/test_resource/dest/test1.txt");
 
    move_f("test/test_resource/dest/test1.txt", "test/test_resource/test1.txt");
    ASSERT_EQUAL(expected, result);
}
CTEST(FileManager, copy_f)
{
    int expected = 0;
    int result = copy_f("test/test_resource/test2.txt", "./test/test_resource/dest");
    ASSERT_EQUAL(expected, result);
}
CTEST(FileManager, delete_f)
{
    copy_f("test/test_resource/test3.txt", "./test/test_resource/dest");
    int expected = 0;
    int result = delete_f("./test/test_resource/dest/test3.txt");
    ASSERT_EQUAL(expected, result);
}

CTEST(FileManager, show_all)
{
    
    int expected = 0;
    int result = show_all("./test/test_resource/dest");
    ASSERT_EQUAL(expected, result);
}

CTEST(FileManager,size_folder){
    unsigned long  expected = 18;
    unsigned long result = size("./test/test_resource/test_size");
    ASSERT_EQUAL(expected, result);
}
CTEST(FileManager,size_file){
    unsigned long  expected = 18;
    unsigned long result = size("./test/test_resource/test_size/test-size.txt");
    ASSERT_EQUAL(expected, result);
}

CTEST(FileManager, procfs)
{
    
    int expected = 0;
    int result = procfs();
    ASSERT_EQUAL(expected, result);
}
