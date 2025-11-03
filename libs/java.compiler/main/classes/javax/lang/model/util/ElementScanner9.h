#ifndef _javax_lang_model_util_ElementScanner9_h_
#define _javax_lang_model_util_ElementScanner9_h_
//$ class javax.lang.model.util.ElementScanner9
//$ extends javax.lang.model.util.ElementScanner8

#include <javax/lang/model/util/ElementScanner8.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export ElementScanner9 : public ::javax::lang::model::util::ElementScanner8 {
	$class(ElementScanner9, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner8)
public:
	ElementScanner9();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitModule(::javax::lang::model::element::ModuleElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementScanner9_h_