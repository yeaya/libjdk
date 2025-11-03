#ifndef _javax_lang_model_element_UnknownElementException_h_
#define _javax_lang_model_element_UnknownElementException_h_
//$ class javax.lang.model.element.UnknownElementException
//$ extends javax.lang.model.UnknownEntityException

#include <javax/lang/model/UnknownEntityException.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import UnknownElementException : public ::javax::lang::model::UnknownEntityException {
	$class(UnknownElementException, $NO_CLASS_INIT, ::javax::lang::model::UnknownEntityException)
public:
	UnknownElementException();
	void init$(::javax::lang::model::element::Element* e, Object$* p);
	virtual $Object* getArgument();
	virtual ::javax::lang::model::element::Element* getUnknownElement();
	static const int64_t serialVersionUID = (int64_t)269;
	::javax::lang::model::element::Element* element = nullptr;
	$Object* parameter = nullptr;
	UnknownElementException(const UnknownElementException& e);
	virtual void throw$() override;
	inline UnknownElementException* operator ->() {
		return (UnknownElementException*)throwing$;
	}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_UnknownElementException_h_