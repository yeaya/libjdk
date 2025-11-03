#ifndef _javax_annotation_processing_Generated_h_
#define _javax_annotation_processing_Generated_h_
//$ interface javax.annotation.processing.Generated
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace annotation {
		namespace processing {

class $export Generated : public ::java::lang::annotation::Annotation {
	$interface(Generated, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* comments() {return nullptr;}
	virtual $String* date() {return nullptr;}
	virtual $StringArray* value() {return nullptr;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Generated_h_