#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AttributeTree$ValueKind.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $AttributeTree$ValueKind = ::com::sun::source::doctree::AttributeTree$ValueKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$Class* AttributeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeTree, getName, $Name*)},
		{"getValue", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AttributeTree, getValue, $List*)},
		{"getValueKind", "()Lcom/sun/source/doctree/AttributeTree$ValueKind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeTree, getValueKind, $AttributeTree$ValueKind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.doctree.AttributeTree$ValueKind", "com.sun.source.doctree.AttributeTree", "ValueKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.source.doctree.AttributeTree",
		nullptr,
		"com.sun.source.doctree.DocTree",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.source.doctree.AttributeTree$ValueKind"
	};
	$loadClass(AttributeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeTree);
	});
	return class$;
}

$Class* AttributeTree::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com