#ifndef _org_w3c_dom_ranges_RangeException_h_
#define _org_w3c_dom_ranges_RangeException_h_
//$ class org.w3c.dom.ranges.RangeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

#pragma push_macro("BAD_BOUNDARYPOINTS_ERR")
#undef BAD_BOUNDARYPOINTS_ERR
#pragma push_macro("INVALID_NODE_TYPE_ERR")
#undef INVALID_NODE_TYPE_ERR

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

class $export RangeException : public ::java::lang::RuntimeException {
	$class(RangeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	RangeException();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0x21B07006846EBD01;
	int16_t code = 0;
	static const int16_t BAD_BOUNDARYPOINTS_ERR = 1;
	static const int16_t INVALID_NODE_TYPE_ERR = 2;
	RangeException(const RangeException& e);
	virtual void throw$() override;
	inline RangeException* operator ->() {
		return (RangeException*)throwing$;
	}
};

			} // ranges
		} // dom
	} // w3c
} // org

#pragma pop_macro("BAD_BOUNDARYPOINTS_ERR")
#pragma pop_macro("INVALID_NODE_TYPE_ERR")

#endif // _org_w3c_dom_ranges_RangeException_h_