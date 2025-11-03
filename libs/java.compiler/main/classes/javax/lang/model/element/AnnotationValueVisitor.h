#ifndef _javax_lang_model_element_AnnotationValueVisitor_h_
#define _javax_lang_model_element_AnnotationValueVisitor_h_
//$ interface javax.lang.model.element.AnnotationValueVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class AnnotationValue;
				class VariableElement;
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

class $export AnnotationValueVisitor : public ::java::lang::Object {
	$interface(AnnotationValueVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* visit(::javax::lang::model::element::AnnotationValue* av, Object$* p) {return nullptr;}
	virtual $Object* visit(::javax::lang::model::element::AnnotationValue* av);
	virtual $Object* visitAnnotation(::javax::lang::model::element::AnnotationMirror* a, Object$* p) {return nullptr;}
	virtual $Object* visitArray(::java::util::List* vals, Object$* p) {return nullptr;}
	virtual $Object* visitBoolean(bool b, Object$* p) {return nullptr;}
	virtual $Object* visitByte(int8_t b, Object$* p) {return nullptr;}
	virtual $Object* visitChar(char16_t c, Object$* p) {return nullptr;}
	virtual $Object* visitDouble(double d, Object$* p) {return nullptr;}
	virtual $Object* visitEnumConstant(::javax::lang::model::element::VariableElement* c, Object$* p) {return nullptr;}
	virtual $Object* visitFloat(float f, Object$* p) {return nullptr;}
	virtual $Object* visitInt(int32_t i, Object$* p) {return nullptr;}
	virtual $Object* visitLong(int64_t i, Object$* p) {return nullptr;}
	virtual $Object* visitShort(int16_t s, Object$* p) {return nullptr;}
	virtual $Object* visitString($String* s, Object$* p) {return nullptr;}
	virtual $Object* visitType(::javax::lang::model::type::TypeMirror* t, Object$* p) {return nullptr;}
	virtual $Object* visitUnknown(::javax::lang::model::element::AnnotationValue* av, Object$* p) {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_AnnotationValueVisitor_h_