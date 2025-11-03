#ifndef _javax_lang_model_util_SimpleAnnotationValueVisitor6_h_
#define _javax_lang_model_util_SimpleAnnotationValueVisitor6_h_
//$ class javax.lang.model.util.SimpleAnnotationValueVisitor6
//$ extends javax.lang.model.util.AbstractAnnotationValueVisitor6

#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>

#pragma push_macro("DEFAULT_VALUE")
#undef DEFAULT_VALUE

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
			namespace util {

class $export SimpleAnnotationValueVisitor6 : public ::javax::lang::model::util::AbstractAnnotationValueVisitor6 {
	$class(SimpleAnnotationValueVisitor6, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractAnnotationValueVisitor6)
public:
	SimpleAnnotationValueVisitor6();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* defaultAction(Object$* o, Object$* p);
	virtual $Object* visitAnnotation(::javax::lang::model::element::AnnotationMirror* a, Object$* p) override;
	virtual $Object* visitArray(::java::util::List* vals, Object$* p) override;
	virtual $Object* visitBoolean(bool b, Object$* p) override;
	virtual $Object* visitByte(int8_t b, Object$* p) override;
	virtual $Object* visitChar(char16_t c, Object$* p) override;
	virtual $Object* visitDouble(double d, Object$* p) override;
	virtual $Object* visitEnumConstant(::javax::lang::model::element::VariableElement* c, Object$* p) override;
	virtual $Object* visitFloat(float f, Object$* p) override;
	virtual $Object* visitInt(int32_t i, Object$* p) override;
	virtual $Object* visitLong(int64_t i, Object$* p) override;
	virtual $Object* visitShort(int16_t s, Object$* p) override;
	virtual $Object* visitString($String* s, Object$* p) override;
	virtual $Object* visitType(::javax::lang::model::type::TypeMirror* t, Object$* p) override;
	$Object* DEFAULT_VALUE = nullptr;
};

			} // util
		} // model
	} // lang
} // javax

#pragma pop_macro("DEFAULT_VALUE")

#endif // _javax_lang_model_util_SimpleAnnotationValueVisitor6_h_