#include <javax/swing/text/BadLocationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

void BadLocationException::init$($String* s, int32_t offs) {
	$Exception::init$(s);
	this->offs = offs;
}

int32_t BadLocationException::offsetRequested() {
	return this->offs;
}

BadLocationException::BadLocationException() {
}

BadLocationException::BadLocationException(const BadLocationException& e) : $Exception(e) {
}

void BadLocationException::throw$() {
	throw *this;
}

$Class* BadLocationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"offs", "I", nullptr, $PRIVATE, $field(BadLocationException, offs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(BadLocationException, init$, void, $String*, int32_t)},
		{"offsetRequested", "()I", nullptr, $PUBLIC, $virtualMethod(BadLocationException, offsetRequested, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.BadLocationException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BadLocationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadLocationException);
	});
	return class$;
}

$Class* BadLocationException::class$ = nullptr;

		} // text
	} // swing
} // javax