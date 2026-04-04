#include <com/sun/tools/javac/util/Warner.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <jcpp.h>

using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$JCDiagnostic$DiagnosticPosition* Warner::pos() {
	return this->pos$;
}

void Warner::warn($Lint$LintCategory* lint) {
	$nc(this->nonSilentLintSet)->add(lint);
}

void Warner::silentWarn($Lint$LintCategory* lint) {
	$nc(this->silentLintSet)->add(lint);
}

void Warner::init$($JCDiagnostic$DiagnosticPosition* pos) {
	$set(this, pos$, nullptr);
	this->warned = false;
	$load($Lint$LintCategory);
	$set(this, nonSilentLintSet, $EnumSet::noneOf($Lint$LintCategory::class$));
	$set(this, silentLintSet, $EnumSet::noneOf($Lint$LintCategory::class$));
	$set(this, pos$, pos);
}

bool Warner::hasSilentLint($Lint$LintCategory* lint) {
	return $nc(this->silentLintSet)->contains(lint);
}

bool Warner::hasNonSilentLint($Lint$LintCategory* lint) {
	return $nc(this->nonSilentLintSet)->contains(lint);
}

bool Warner::hasLint($Lint$LintCategory* lint) {
	bool var$0 = hasSilentLint(lint);
	return var$0 || hasNonSilentLint(lint);
}

void Warner::clear() {
	$nc(this->nonSilentLintSet)->clear();
	$nc(this->silentLintSet)->clear();
	this->warned = false;
}

void Warner::init$() {
	Warner::init$(nullptr);
}

Warner::Warner() {
}

$Class* Warner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PRIVATE, $field(Warner, pos$)},
		{"warned", "Z", nullptr, $PROTECTED, $field(Warner, warned)},
		{"nonSilentLintSet", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE, $field(Warner, nonSilentLintSet)},
		{"silentLintSet", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE, $field(Warner, silentLintSet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;)V", nullptr, $PUBLIC, $method(Warner, init$, void, $JCDiagnostic$DiagnosticPosition*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Warner, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Warner, clear, void)},
		{"hasLint", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC, $virtualMethod(Warner, hasLint, bool, $Lint$LintCategory*)},
		{"hasNonSilentLint", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC, $virtualMethod(Warner, hasNonSilentLint, bool, $Lint$LintCategory*)},
		{"hasSilentLint", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC, $virtualMethod(Warner, hasSilentLint, bool, $Lint$LintCategory*)},
		{"pos", "()Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, $PUBLIC, $virtualMethod(Warner, pos, $JCDiagnostic$DiagnosticPosition*)},
		{"silentWarn", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PUBLIC, $virtualMethod(Warner, silentWarn, void, $Lint$LintCategory*)},
		{"warn", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)V", nullptr, $PUBLIC, $virtualMethod(Warner, warn, void, $Lint$LintCategory*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.Warner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Warner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Warner);
	});
	return class$;
}

$Class* Warner::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com