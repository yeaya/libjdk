#ifndef _javax_script_ScriptException_h_
#define _javax_script_ScriptException_h_
//$ class javax.script.ScriptException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace script {

class $export ScriptException : public ::java::lang::Exception {
	$class(ScriptException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	ScriptException();
	void init$($String* s);
	void init$(::java::lang::Exception* e);
	void init$($String* message, $String* fileName, int32_t lineNumber);
	void init$($String* message, $String* fileName, int32_t lineNumber, int32_t columnNumber);
	virtual int32_t getColumnNumber();
	virtual $String* getFileName();
	virtual int32_t getLineNumber();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x72B36E5166B03F29;
	$String* fileName = nullptr;
	int32_t lineNumber = 0;
	int32_t columnNumber = 0;
	ScriptException(const ScriptException& e);
	virtual void throw$() override;
	inline ScriptException* operator ->() {
		return (ScriptException*)throwing$;
	}
};

	} // script
} // javax

#endif // _javax_script_ScriptException_h_