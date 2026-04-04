#include <com/sun/source/doctree/ErroneousTree.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* ErroneousTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDiagnostic", "()Ljavax/tools/Diagnostic;", "()Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ErroneousTree, getDiagnostic, $Diagnostic*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.ErroneousTree",
		nullptr,
		"com.sun.source.doctree.TextTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(ErroneousTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErroneousTree);
	});
	return class$;
}

$Class* ErroneousTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com