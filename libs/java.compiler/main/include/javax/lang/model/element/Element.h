#ifndef _javax_lang_model_element_Element_h_
#define _javax_lang_model_element_Element_h_
//$ interface javax.lang.model.element.Element
//$ extends javax.lang.model.AnnotatedConstruct

#include <javax/lang/model/AnnotatedConstruct.h>

namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ElementKind;
				class ElementVisitor;
				class Name;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import Element : public ::javax::lang::model::AnnotatedConstruct {
	$interface(Element, $NO_CLASS_INIT, ::javax::lang::model::AnnotatedConstruct)
public:
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* asType() {return nullptr;}
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override {return nullptr;}
	virtual ::java::util::List* getAnnotationMirrors() override {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override {return nullptr;}
	virtual ::java::util::List* getEnclosedElements() {return nullptr;}
	virtual ::javax::lang::model::element::Element* getEnclosingElement() {return nullptr;}
	virtual ::javax::lang::model::element::ElementKind* getKind() {return nullptr;}
	virtual ::java::util::Set* getModifiers() {return nullptr;}
	virtual ::javax::lang::model::element::Name* getSimpleName() {return nullptr;}
	virtual int32_t hashCode() override;
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_Element_h_