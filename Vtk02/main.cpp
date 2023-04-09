#include <itkImage.h>
#include <itkImageFileReader.h>
#include <itkImageFileWriter.h>

int main(int argc, char *argv[])
{
	const unsigned int Dimension = 2; //定义图像维数
	// typedef unsigned char                                     PixelType;      //定义像素类型
	typedef itk::RGBPixel<unsigned char> PixelType;
	typedef itk::Image<PixelType, 2> ImageType;
	typedef itk::ImageFileReader<ImageType> ReaderType;
	typedef itk::ImageFileWriter<ImageType> WriterType;
	ReaderType::Pointer reader = ReaderType::New();
	WriterType::Pointer writer = WriterType::New();

	reader->SetFileName("0.jpg");
	writer->SetFileName("1.jpg");

	ImageType::Pointer image = reader->GetOutput();
	writer->SetInput(image);

	writer->Update(); //  Aliased to the Write() method to be consistent with the rest of the pipeline.
	getchar();
	return 0;
}
