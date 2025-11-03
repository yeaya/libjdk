#ifndef _javax_lang_model_util_SimpleTypeVisitor7_h_
#define _javax_lang_model_util_SimpleTypeVisitor7_h_
//$ class javax.lang.model.util.SimpleTypeVisitor7
//$ extends javax.lang.model.util.SimpleTypeVisitor6

#include <javax/lang/model/util/SimpleTypeVisitor6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class UnionType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export SimpleTypeVisitor7 : public ::javax::lang::model::util::SimpleTypeVisitor6 {
	$class(SimpleTypeVisitor7, $NO_CLASS_INIT, ::javax::lang::model::util::SimpleTypeVisitor6)
public:
	SimpleTypeVisitor7();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitUnion(::javax::lang::model::type::UnionType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_SimpleTypeVisitor7_h_