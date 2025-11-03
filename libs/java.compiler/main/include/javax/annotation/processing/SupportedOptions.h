#ifndef _javax_annotation_processing_SupportedOptions_h_
#define _javax_annotation_processing_SupportedOptions_h_
//$ interface javax.annotation.processing.SupportedOptions
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace annotation {
		namespace processing {

class $import SupportedOptions : public ::java::lang::annotation::Annotation {
	$interface(SupportedOptions, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_SupportedOptions_h_