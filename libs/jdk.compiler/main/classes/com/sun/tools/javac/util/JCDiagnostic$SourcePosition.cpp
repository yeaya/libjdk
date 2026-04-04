#include <com/sun/tools/javac/util/JCDiagnostic$SourcePosition.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void JCDiagnostic$SourcePosition::init$($JCDiagnostic* this$0) {
	$set(this, this$0, this$0);
	int32_t n = (this$0->position == nullptr ? $Position::NOPOS : this$0->position->getPreferredPosition());
	if (n == $Position::NOPOS || this$0->source == nullptr) {
		this->line = (this->column = -1);
	} else {
		this->line = this$0->source->getLineNumber(n);
		this->column = this$0->source->getColumnNumber(n, true);
	}
}

int32_t JCDiagnostic$SourcePosition::getLineNumber() {
	return this->line;
}

int32_t JCDiagnostic$SourcePosition::getColumnNumber() {
	return this->column;
}

JCDiagnostic$SourcePosition::JCDiagnostic$SourcePosition() {
}

$Class* JCDiagnostic$SourcePosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $FINAL | $SYNTHETIC, $field(JCDiagnostic$SourcePosition, this$0)},
		{"line", "I", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic$SourcePosition, line)},
		{"column", "I", nullptr, $PRIVATE | $FINAL, $field(JCDiagnostic$SourcePosition, column)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(JCDiagnostic$SourcePosition, init$, void, $JCDiagnostic*)},
		{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(JCDiagnostic$SourcePosition, getColumnNumber, int32_t)},
		{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(JCDiagnostic$SourcePosition, getLineNumber, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$SourcePosition", "com.sun.tools.javac.util.JCDiagnostic", "SourcePosition", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.JCDiagnostic$SourcePosition",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.JCDiagnostic"
	};
	$loadClass(JCDiagnostic$SourcePosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$SourcePosition);
	});
	return class$;
}

$Class* JCDiagnostic$SourcePosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com