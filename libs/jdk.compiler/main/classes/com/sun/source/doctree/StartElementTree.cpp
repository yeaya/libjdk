#include <com/sun/source/doctree/StartElementTree.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* StartElementTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributes", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(StartElementTree, getAttributes, $List*)},
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartElementTree, getName, $Name*)},
		{"isSelfClosing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StartElementTree, isSelfClosing, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.StartElementTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$
	};
	$loadClass(StartElementTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StartElementTree);
	});
	return class$;
}

$Class* StartElementTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com