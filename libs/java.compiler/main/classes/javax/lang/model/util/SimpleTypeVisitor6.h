#ifndef _javax_lang_model_util_SimpleTypeVisitor6_h_
#define _javax_lang_model_util_SimpleTypeVisitor6_h_
//$ class javax.lang.model.util.SimpleTypeVisitor6
//$ extends javax.lang.model.util.AbstractTypeVisitor6

#include <javax/lang/model/util/AbstractTypeVisitor6.h>

#pragma push_macro("DEFAULT_VALUE")
#undef DEFAULT_VALUE

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class ArrayType;
				class DeclaredType;
				class ErrorType;
				class ExecutableType;
				class NoType;
				class NullType;
				class PrimitiveType;
				class TypeMirror;
				class TypeVariable;
				class WildcardType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export SimpleTypeVisitor6 : public ::javax::lang::model::util::AbstractTypeVisitor6 {
	$class(SimpleTypeVisitor6, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractTypeVisitor6)
public:
	SimpleTypeVisitor6();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* defaultAction(::javax::lang::model::type::TypeMirror* e, Object$* p);
	virtual $Object* visitArray(::javax::lang::model::type::ArrayType* t, Object$* p) override;
	virtual $Object* visitDeclared(::javax::lang::model::type::DeclaredType* t, Object$* p) override;
	virtual $Object* visitError(::javax::lang::model::type::ErrorType* t, Object$* p) override;
	virtual $Object* visitExecutable(::javax::lang::model::type::ExecutableType* t, Object$* p) override;
	virtual $Object* visitNoType(::javax::lang::model::type::NoType* t, Object$* p) override;
	virtual $Object* visitNull(::javax::lang::model::type::NullType* t, Object$* p) override;
	virtual $Object* visitPrimitive(::javax::lang::model::type::PrimitiveType* t, Object$* p) override;
	virtual $Object* visitTypeVariable(::javax::lang::model::type::TypeVariable* t, Object$* p) override;
	virtual $Object* visitWildcard(::javax::lang::model::type::WildcardType* t, Object$* p) override;
	$Object* DEFAULT_VALUE = nullptr;
};

			} // util
		} // model
	} // lang
} // javax

#pragma pop_macro("DEFAULT_VALUE")

#endif // _javax_lang_model_util_SimpleTypeVisitor6_h_