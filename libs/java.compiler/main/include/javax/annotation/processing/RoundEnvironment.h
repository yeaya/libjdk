#ifndef _javax_annotation_processing_RoundEnvironment_h_
#define _javax_annotation_processing_RoundEnvironment_h_
//$ interface javax.annotation.processing.RoundEnvironment
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class TypeElement;
			}
		}
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $import RoundEnvironment : public ::java::lang::Object {
	$interface(RoundEnvironment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool errorRaised() {return false;}
	virtual ::java::util::Set* getElementsAnnotatedWith(::javax::lang::model::element::TypeElement* a) {return nullptr;}
	virtual ::java::util::Set* getElementsAnnotatedWith($Class* a) {return nullptr;}
	virtual ::java::util::Set* getElementsAnnotatedWithAny($Array<::javax::lang::model::element::TypeElement>* annotations);
	virtual ::java::util::Set* getElementsAnnotatedWithAny(::java::util::Set* annotations);
	virtual ::java::util::Set* getRootElements() {return nullptr;}
	virtual bool processingOver() {return false;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_RoundEnvironment_h_