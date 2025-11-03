#ifndef _javax_lang_model_util_TypeKindVisitor6_h_
#define _javax_lang_model_util_TypeKindVisitor6_h_
//$ class javax.lang.model.util.TypeKindVisitor6
//$ extends javax.lang.model.util.SimpleTypeVisitor6

#include <javax/lang/model/util/SimpleTypeVisitor6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class NoType;
				class PrimitiveType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export TypeKindVisitor6 : public ::javax::lang::model::util::SimpleTypeVisitor6 {
	$class(TypeKindVisitor6, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleTypeVisitor6)
public:
	TypeKindVisitor6();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitNoType(::javax::lang::model::type::NoType* t, Object$* p) override;
	virtual $Object* visitNoTypeAsModule(::javax::lang::model::type::NoType* t, Object$* p);
	virtual $Object* visitNoTypeAsNone(::javax::lang::model::type::NoType* t, Object$* p);
	virtual $Object* visitNoTypeAsPackage(::javax::lang::model::type::NoType* t, Object$* p);
	virtual $Object* visitNoTypeAsVoid(::javax::lang::model::type::NoType* t, Object$* p);
	virtual $Object* visitPrimitive(::javax::lang::model::type::PrimitiveType* t, Object$* p) override;
	virtual $Object* visitPrimitiveAsBoolean(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsByte(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsChar(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsDouble(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsFloat(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsInt(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsLong(::javax::lang::model::type::PrimitiveType* t, Object$* p);
	virtual $Object* visitPrimitiveAsShort(::javax::lang::model::type::PrimitiveType* t, Object$* p);
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_TypeKindVisitor6_h_