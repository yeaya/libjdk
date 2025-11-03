#ifndef _javax_annotation_processing_FilerException_h_
#define _javax_annotation_processing_FilerException_h_
//$ class javax.annotation.processing.FilerException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace javax {
	namespace annotation {
		namespace processing {

class $import FilerException : public ::java::io::IOException {
	$class(FilerException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	FilerException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x74F0AB2B9348CD1D;
	FilerException(const FilerException& e);
	virtual void throw$() override;
	inline FilerException* operator ->() {
		return (FilerException*)throwing$;
	}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_FilerException_h_