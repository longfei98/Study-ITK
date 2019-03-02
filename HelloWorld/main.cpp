/**********************************************************************

Copyright (c) Mr.Bin. All rights reserved.
For more information visit:   http://blog.csdn.net/webzhuce

**********************************************************************/
#include "itkImage.h"
#include "itkImageFileReader.h"
#include "itkGradientMagnitudeImageFilter.h"

int main(int argc, char **argv)
{
	typedef itk::Image<unsigned short, 2> ImageType;
	typedef itk::ImageFileReader<ImageType> ReaderType;
	typedef itk::GradientMagnitudeImageFilter<ImageType, ImageType> FilterType;
	ReaderType::Pointer reader = ReaderType::New();
	FilterType::Pointer filter = FilterType::New();
	reader->SetFileName("E:\\TestData\\lenna.jpg");
	filter->SetInput(reader->GetOutput());
	filter->Update();
	//����ITK�޿��ӻ����ܣ����������ITK Hello World��
	std::cout << "ITK��Hello World��" << std::endl;
	return EXIT_SUCCESS;
}
