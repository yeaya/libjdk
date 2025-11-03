#ifndef _javax_lang_model_element_TypeElement_h_
#define _javax_lang_model_element_TypeElement_h_
//$ interface javax.lang.model.element.TypeElement
//$ extends javax.lang.model.element.Parameterizable,javax.lang.model.element.QualifiedNameable

#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/QualifiedNameable.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class NestingKind;
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

class $import TypeElement : public ::javax::lang::model::element::Parameterizable, public ::javax::lang::model::element::QualifiedNameable {
	$interface(TypeElement, $NO_CLASS_INIT, ::javax::lang::model::element::Parameterizable, ::javax::lang::model::element::QualifiedNameable)
public:
	virtual $Object* accept(::javax::lang::model::element::ElementVisitor* v, Object$* p) override {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* asType() override {return nullptr;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override {return nullptr;}
	virtual ::java::util::List* getAnnotationMirrors() override {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override {return nullptr;}
	virtual ::java::util::List* getEnclosedElements() override {return nullptr;}
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override {return nullptr;}
	virtual ::java::util::List* getInterfaces() {return nullptr;}
	virtual ::javax::lang::model::element::ElementKind* getKind() override {return nullptr;}
	virtual ::java::util::Set* getModifiers() override {return nullptr;}
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() {return nullptr;}
	virtual ::java::util::List* getPermittedSubclasses();
	virtual ::javax::lang::model::element::Name* getQualifiedName() override {return nullptr;}
	virtual ::java::util::List* getRecordComponents();
	virtual ::javax::lang::model::element::Name* getSimpleName() override {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getSuperclass() {return nullptr;}
	virtual ::java::util::List* getTypeParameters() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_TypeElement_h_