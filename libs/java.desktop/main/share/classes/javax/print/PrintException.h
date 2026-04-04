#ifndef _javax_print_PrintException_h_
#define _javax_print_PrintException_h_
//$ class javax.print.PrintException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace print {

class $export PrintException : public ::java::lang::Exception {
	$class(PrintException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	PrintException();
	void init$();
	void init$($String* s);
	void init$(::java::lang::Exception* e);
	void init$($String* s, ::java::lang::Exception* e);
	static const int64_t serialVersionUID = (int64_t)0xadab69fd7bd5d699;
	PrintException(const PrintException& e);
	virtual void throw$() override;
	inline PrintException* operator ->() const {
		return (PrintException*)throwing$;
	}
	inline operator PrintException*() const {
		return (PrintException*)throwing$;
	}
};

	} // print
} // javax

#endif // _javax_print_PrintException_h_