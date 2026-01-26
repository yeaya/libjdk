#include <com/sun/source/util/DocSourcePositions.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <jcpp.h>

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _DocSourcePositions_MethodInfo_[] = {
	{"getEndPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/DocTree;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocSourcePositions, getEndPosition, int64_t, $CompilationUnitTree*, $DocCommentTree*, $DocTree*)},
	{"getStartPosition", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/DocTree;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocSourcePositions, getStartPosition, int64_t, $CompilationUnitTree*, $DocCommentTree*, $DocTree*)},
	{}
};

$ClassInfo _DocSourcePositions_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.util.DocSourcePositions",
	nullptr,
	"com.sun.source.util.SourcePositions",
	nullptr,
	_DocSourcePositions_MethodInfo_
};

$Object* allocate$DocSourcePositions($Class* clazz) {
	return $of($alloc(DocSourcePositions));
}

$Class* DocSourcePositions::load$($String* name, bool initialize) {
	$loadClass(DocSourcePositions, name, initialize, &_DocSourcePositions_ClassInfo_, allocate$DocSourcePositions);
	return class$;
}

$Class* DocSourcePositions::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com