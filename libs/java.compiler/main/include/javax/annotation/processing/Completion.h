#ifndef _javax_annotation_processing_Completion_h_
#define _javax_annotation_processing_Completion_h_
//$ interface javax.annotation.processing.Completion
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace annotation {
		namespace processing {

class $import Completion : public ::java::lang::Object {
	$interface(Completion, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getMessage() {return nullptr;}
	virtual $String* getValue() {return nullptr;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Completion_h_