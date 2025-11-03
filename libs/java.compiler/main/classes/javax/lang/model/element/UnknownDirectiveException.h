#ifndef _javax_lang_model_element_UnknownDirectiveException_h_
#define _javax_lang_model_element_UnknownDirectiveException_h_
//$ class javax.lang.model.element.UnknownDirectiveException
//$ extends javax.lang.model.UnknownEntityException

#include <javax/lang/model/UnknownEntityException.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ModuleElement$Directive;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export UnknownDirectiveException : public ::javax::lang::model::UnknownEntityException {
	$class(UnknownDirectiveException, $NO_CLASS_INIT, ::javax::lang::model::UnknownEntityException)
public:
	UnknownDirectiveException();
	void init$(::javax::lang::model::element::ModuleElement$Directive* d, Object$* p);
	virtual $Object* getArgument();
	virtual ::javax::lang::model::element::ModuleElement$Directive* getUnknownDirective();
	static const int64_t serialVersionUID = (int64_t)269;
	::javax::lang::model::element::ModuleElement$Directive* directive = nullptr;
	$Object* parameter = nullptr;
	UnknownDirectiveException(const UnknownDirectiveException& e);
	virtual void throw$() override;
	inline UnknownDirectiveException* operator ->() {
		return (UnknownDirectiveException*)throwing$;
	}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_UnknownDirectiveException_h_