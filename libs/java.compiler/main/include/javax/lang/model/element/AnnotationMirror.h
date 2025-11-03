#ifndef _javax_lang_model_element_AnnotationMirror_h_
#define _javax_lang_model_element_AnnotationMirror_h_
//$ interface javax.lang.model.element.AnnotationMirror
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class DeclaredType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import AnnotationMirror : public ::java::lang::Object {
	$interface(AnnotationMirror, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::lang::model::type::DeclaredType* getAnnotationType() {return nullptr;}
	virtual ::java::util::Map* getElementValues() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_AnnotationMirror_h_