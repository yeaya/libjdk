#ifndef _javax_annotation_processing_SupportedAnnotationTypes_h_
#define _javax_annotation_processing_SupportedAnnotationTypes_h_
//$ interface javax.annotation.processing.SupportedAnnotationTypes
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace annotation {
		namespace processing {

class $export SupportedAnnotationTypes : public ::java::lang::annotation::Annotation {
	$interface(SupportedAnnotationTypes, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_SupportedAnnotationTypes_h_