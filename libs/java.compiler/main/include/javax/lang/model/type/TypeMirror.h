#ifndef _javax_lang_model_type_TypeMirror_h_
#define _javax_lang_model_type_TypeMirror_h_
//$ interface javax.lang.model.type.TypeMirror
//$ extends javax.lang.model.AnnotatedConstruct

#include <javax/lang/model/AnnotatedConstruct.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
				class TypeVisitor;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $import TypeMirror : public ::javax::lang::model::AnnotatedConstruct {
	$interface(TypeMirror, $NO_CLASS_INIT, ::javax::lang::model::AnnotatedConstruct)
public:
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) {return nullptr;}
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override {return nullptr;}
	virtual ::java::util::List* getAnnotationMirrors() override {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override {return nullptr;}
	virtual ::javax::lang::model::type::TypeKind* getKind() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_TypeMirror_h_