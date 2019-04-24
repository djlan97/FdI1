extern int txt2bin(const char *srcTxtFile, const char *dstBinFile);
extern int bin2txt(const char *srcBinFile, const char *dstTxtFile);

int main(void){

	txt2bin("file_sorgente_.txt", "src.bin");
	bin2txt("src.bin", "dst.txt");
	return 0;
}