#include <com/sun/source/util/DocTrees.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/util/DocTreeFactory.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/Trees.h>
#include <java/lang/CharSequence.h>
#include <java/text/BreakIterator.h>
#include <java/util/List.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <jcpp.h>

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $DocTreeFactory = ::com::sun::source::util::DocTreeFactory;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $TreePath = ::com::sun::source::util::TreePath;
using $Trees = ::com::sun::source::util::Trees;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $List = ::java::util::List;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $Element = ::javax::lang::model::element::Element;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $FileObject = ::javax::tools::FileObject;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _DocTrees_MethodInfo_[] = {
	{"getSourcePositions", "()Lcom/sun/source/util/SourcePositions;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DocTrees, init$, void)},
	{"getBreakIterator", "()Ljava/text/BreakIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getBreakIterator, $BreakIterator*)},
	{"getCharacters", "(Lcom/sun/source/doctree/EntityTree;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getCharacters, $String*, $EntityTree*)},
	{"getDocCommentTree", "(Lcom/sun/source/util/TreePath;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getDocCommentTree, $DocCommentTree*, $TreePath*)},
	{"getDocCommentTree", "(Ljavax/lang/model/element/Element;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getDocCommentTree, $DocCommentTree*, $Element*)},
	{"getDocCommentTree", "(Ljavax/tools/FileObject;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getDocCommentTree, $DocCommentTree*, $FileObject*)},
	{"getDocCommentTree", "(Ljavax/lang/model/element/Element;Ljava/lang/String;)Lcom/sun/source/doctree/DocCommentTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getDocCommentTree, $DocCommentTree*, $Element*, $String*), "java.io.IOException"},
	{"getDocTreeFactory", "()Lcom/sun/source/util/DocTreeFactory;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getDocTreeFactory, $DocTreeFactory*)},
	{"getDocTreePath", "(Ljavax/tools/FileObject;Ljavax/lang/model/element/PackageElement;)Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getDocTreePath, $DocTreePath*, $FileObject*, $PackageElement*)},
	{"getElement", "(Lcom/sun/source/util/DocTreePath;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getElement, $Element*, $DocTreePath*)},
	{"getFirstSentence", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;)Ljava/util/List<Lcom/sun/source/doctree/DocTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getFirstSentence, $List*, $List*)},
	{"getType", "(Lcom/sun/source/util/DocTreePath;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, getType, $TypeMirror*, $DocTreePath*)},
	{"instance", "(Ljavax/tools/JavaCompiler$CompilationTask;)Lcom/sun/source/util/DocTrees;", nullptr, $PUBLIC | $STATIC, $staticMethod(DocTrees, instance, DocTrees*, $JavaCompiler$CompilationTask*)},
	{"instance", "(Ljavax/annotation/processing/ProcessingEnvironment;)Lcom/sun/source/util/DocTrees;", nullptr, $PUBLIC | $STATIC, $staticMethod(DocTrees, instance, DocTrees*, $ProcessingEnvironment*)},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Lcom/sun/source/doctree/DocTree;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, printMessage, void, $Diagnostic$Kind*, $CharSequence*, $DocTree*, $DocCommentTree*, $CompilationUnitTree*)},
	{"setBreakIterator", "(Ljava/text/BreakIterator;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocTrees, setBreakIterator, void, $BreakIterator*)},
	{}
};

$ClassInfo _DocTrees_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.source.util.DocTrees",
	"com.sun.source.util.Trees",
	nullptr,
	nullptr,
	_DocTrees_MethodInfo_
};

$Object* allocate$DocTrees($Class* clazz) {
	return $of($alloc(DocTrees));
}

void DocTrees::init$() {
	$Trees::init$();
}

DocTrees* DocTrees::instance($JavaCompiler$CompilationTask* task) {
	$init(DocTrees);
	return $cast(DocTrees, $Trees::instance(task));
}

DocTrees* DocTrees::instance($ProcessingEnvironment* env) {
	$init(DocTrees);
	if (!$nc($($nc($of(env))->getClass()->getName()))->equals("com.sun.tools.javac.processing.JavacProcessingEnvironment"_s)) {
		$throwNew($IllegalArgumentException);
	}
	return $cast(DocTrees, getJavacTrees($ProcessingEnvironment::class$, env));
}

DocTrees::DocTrees() {
}

$Class* DocTrees::load$($String* name, bool initialize) {
	$loadClass(DocTrees, name, initialize, &_DocTrees_ClassInfo_, allocate$DocTrees);
	return class$;
}

$Class* DocTrees::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com