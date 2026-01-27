#ifndef _org_w3c_dom_ls_LSException_h_
#define _org_w3c_dom_ls_LSException_h_
//$ class org.w3c.dom.ls.LSException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

#pragma push_macro("PARSE_ERR")
#undef PARSE_ERR
#pragma push_macro("SERIALIZE_ERR")
#undef SERIALIZE_ERR

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $import LSException : public ::java::lang::RuntimeException {
	$class(LSException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	LSException();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0x4A8C14A685408852;
	int16_t code = 0;
	static const int16_t PARSE_ERR = 81;
	static const int16_t SERIALIZE_ERR = 82;
	LSException(const LSException& e);
	virtual void throw$() override;
	inline LSException* operator ->() {
		return (LSException*)throwing$;
	}
};

			} // ls
		} // dom
	} // w3c
} // org

#pragma pop_macro("PARSE_ERR")
#pragma pop_macro("SERIALIZE_ERR")

#endif // _org_w3c_dom_ls_LSException_h_