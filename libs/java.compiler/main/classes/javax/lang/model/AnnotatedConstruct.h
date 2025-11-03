#ifndef _javax_lang_model_AnnotatedConstruct_h_
#define _javax_lang_model_AnnotatedConstruct_h_
//$ interface javax.lang.model.AnnotatedConstruct
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace lang {
		namespace model {

class $export AnnotatedConstruct : public ::java::lang::Object {
	$interface(AnnotatedConstruct, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) {return nullptr;}
	virtual ::java::util::List* getAnnotationMirrors() {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) {return nullptr;}
};

		} // model
	} // lang
} // javax

#endif // _javax_lang_model_AnnotatedConstruct_h_