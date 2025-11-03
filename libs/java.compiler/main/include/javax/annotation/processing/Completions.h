#ifndef _javax_annotation_processing_Completions_h_
#define _javax_annotation_processing_Completions_h_
//$ class javax.annotation.processing.Completions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace annotation {
		namespace processing {
			class Completion;
		}
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $import Completions : public ::java::lang::Object {
	$class(Completions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Completions();
	void init$();
	static ::javax::annotation::processing::Completion* of($String* value, $String* message);
	static ::javax::annotation::processing::Completion* of($String* value);
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Completions_h_