#include <javax/script/ScriptException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace script {

$FieldInfo _ScriptException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScriptException, serialVersionUID)},
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ScriptException, fileName)},
	{"lineNumber", "I", nullptr, $PRIVATE | $FINAL, $field(ScriptException, lineNumber)},
	{"columnNumber", "I", nullptr, $PRIVATE | $FINAL, $field(ScriptException, columnNumber)},
	{}
};

$MethodInfo _ScriptException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptException::*)($String*)>(&ScriptException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptException::*)($Exception*)>(&ScriptException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptException::*)($String*,$String*,int32_t)>(&ScriptException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(ScriptException::*)($String*,$String*,int32_t,int32_t)>(&ScriptException::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ScriptException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.script.ScriptException",
	"java.lang.Exception",
	nullptr,
	_ScriptException_FieldInfo_,
	_ScriptException_MethodInfo_
};

$Object* allocate$ScriptException($Class* clazz) {
	return $of($alloc(ScriptException));
}

void ScriptException::init$($String* s) {
	$Exception::init$(s);
	$set(this, fileName, nullptr);
	this->lineNumber = -1;
	this->columnNumber = -1;
}

void ScriptException::init$($Exception* e) {
	$Exception::init$(static_cast<$Throwable*>(e));
	$set(this, fileName, nullptr);
	this->lineNumber = -1;
	this->columnNumber = -1;
}

void ScriptException::init$($String* message, $String* fileName, int32_t lineNumber) {
	$Exception::init$(message);
	$set(this, fileName, fileName);
	this->lineNumber = lineNumber;
	this->columnNumber = -1;
}

void ScriptException::init$($String* message, $String* fileName, int32_t lineNumber, int32_t columnNumber) {
	$Exception::init$(message);
	$set(this, fileName, fileName);
	this->lineNumber = lineNumber;
	this->columnNumber = columnNumber;
}

$String* ScriptException::getMessage() {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, $Exception::getMessage());
	if (this->fileName != nullptr) {
		$plusAssign(ret, ($$str({" in "_s, this->fileName})));
		if (this->lineNumber != -1) {
			$plusAssign(ret, $$str({" at line number "_s, $$str(this->lineNumber)}));
		}
		if (this->columnNumber != -1) {
			$plusAssign(ret, $$str({" at column number "_s, $$str(this->columnNumber)}));
		}
	}
	return ret;
}

int32_t ScriptException::getLineNumber() {
	return this->lineNumber;
}

int32_t ScriptException::getColumnNumber() {
	return this->columnNumber;
}

$String* ScriptException::getFileName() {
	return this->fileName;
}

ScriptException::ScriptException() {
}

ScriptException::ScriptException(const ScriptException& e) : $Exception(e) {
}

void ScriptException::throw$() {
	throw *this;
}

$Class* ScriptException::load$($String* name, bool initialize) {
	$loadClass(ScriptException, name, initialize, &_ScriptException_ClassInfo_, allocate$ScriptException);
	return class$;
}

$Class* ScriptException::class$ = nullptr;

	} // script
} // javax