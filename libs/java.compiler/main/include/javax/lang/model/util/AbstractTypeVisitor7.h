#ifndef _javax_lang_model_util_AbstractTypeVisitor7_h_
#define _javax_lang_model_util_AbstractTypeVisitor7_h_
//$ class javax.lang.model.util.AbstractTypeVisitor7
//$ extends javax.lang.model.util.AbstractTypeVisitor6

#include <javax/lang/model/util/AbstractTypeVisitor6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import AbstractTypeVisitor7 : public ::javax::lang::model::util::AbstractTypeVisitor6 {
	$class(AbstractTypeVisitor7, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractTypeVisitor6)
public:
	AbstractTypeVisitor7();
	void init$();
	virtual $Object* visitUnion(::javax::lang::model::type::UnionType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractTypeVisitor7_h_