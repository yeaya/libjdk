#include <com/sun/source/util/Trees.h>

#include <com/sun/source/tree/CatchTree.h>
#include <com/sun/source/tree/ClassTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/MethodTree.h>
#include <com/sun/source/tree/Scope.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/SourcePositions.h>
#include <com/sun/source/util/TreePath.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Method.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <jcpp.h>

using $CatchTree = ::com::sun::source::tree::CatchTree;
using $ClassTree = ::com::sun::source::tree::ClassTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $MethodTree = ::com::sun::source::tree::MethodTree;
using $Scope = ::com::sun::source::tree::Scope;
using $Tree = ::com::sun::source::tree::Tree;
using $SourcePositions = ::com::sun::source::util::SourcePositions;
using $TreePath = ::com::sun::source::util::TreePath;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Method = ::java::lang::reflect::Method;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $ErrorType = ::javax::lang::model::type::ErrorType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _Trees_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Trees, init$, void)},
	{"getDocComment", "(Lcom/sun/source/util/TreePath;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getDocComment, $String*, $TreePath*)},
	{"getElement", "(Lcom/sun/source/util/TreePath;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getElement, $Element*, $TreePath*)},
	{"getJavacTrees", "(Ljava/lang/Class;Ljava/lang/Object;)Lcom/sun/source/util/Trees;", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Lcom/sun/source/util/Trees;", $STATIC, $staticMethod(Trees, getJavacTrees, Trees*, $Class*, Object$*)},
	{"getLub", "(Lcom/sun/source/tree/CatchTree;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getLub, $TypeMirror*, $CatchTree*)},
	{"getOriginalType", "(Ljavax/lang/model/type/ErrorType;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getOriginalType, $TypeMirror*, $ErrorType*)},
	{"getPath", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getPath, $TreePath*, $CompilationUnitTree*, $Tree*)},
	{"getPath", "(Ljavax/lang/model/element/Element;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getPath, $TreePath*, $Element*)},
	{"getPath", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getPath, $TreePath*, $Element*, $AnnotationMirror*)},
	{"getPath", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getPath, $TreePath*, $Element*, $AnnotationMirror*, $AnnotationValue*)},
	{"getScope", "(Lcom/sun/source/util/TreePath;)Lcom/sun/source/tree/Scope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getScope, $Scope*, $TreePath*)},
	{"getSourcePositions", "()Lcom/sun/source/util/SourcePositions;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getSourcePositions, $SourcePositions*)},
	{"getTree", "(Ljavax/lang/model/element/Element;)Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getTree, $Tree*, $Element*)},
	{"getTree", "(Ljavax/lang/model/element/TypeElement;)Lcom/sun/source/tree/ClassTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getTree, $ClassTree*, $TypeElement*)},
	{"getTree", "(Ljavax/lang/model/element/ExecutableElement;)Lcom/sun/source/tree/MethodTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getTree, $MethodTree*, $ExecutableElement*)},
	{"getTree", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getTree, $Tree*, $Element*, $AnnotationMirror*)},
	{"getTree", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getTree, $Tree*, $Element*, $AnnotationMirror*, $AnnotationValue*)},
	{"getTypeMirror", "(Lcom/sun/source/util/TreePath;)Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, getTypeMirror, $TypeMirror*, $TreePath*)},
	{"instance", "(Ljavax/tools/JavaCompiler$CompilationTask;)Lcom/sun/source/util/Trees;", nullptr, $PUBLIC | $STATIC, $staticMethod(Trees, instance, Trees*, $JavaCompiler$CompilationTask*)},
	{"instance", "(Ljavax/annotation/processing/ProcessingEnvironment;)Lcom/sun/source/util/Trees;", nullptr, $PUBLIC | $STATIC, $staticMethod(Trees, instance, Trees*, $ProcessingEnvironment*)},
	{"isAccessible", "(Lcom/sun/source/tree/Scope;Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, isAccessible, bool, $Scope*, $TypeElement*)},
	{"isAccessible", "(Lcom/sun/source/tree/Scope;Ljavax/lang/model/element/Element;Ljavax/lang/model/type/DeclaredType;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, isAccessible, bool, $Scope*, $Element*, $DeclaredType*)},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Lcom/sun/source/tree/Tree;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trees, printMessage, void, $Diagnostic$Kind*, $CharSequence*, $Tree*, $CompilationUnitTree*)},
	{}
};

$ClassInfo _Trees_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.source.util.Trees",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Trees_MethodInfo_
};

$Object* allocate$Trees($Class* clazz) {
	return $of($alloc(Trees));
}

void Trees::init$() {
}

Trees* Trees::instance($JavaCompiler$CompilationTask* task) {
	$var($String, taskClassName, $nc($of(task))->getClass()->getName());
	bool var$0 = !$nc(taskClassName)->equals("com.sun.tools.javac.api.JavacTaskImpl"_s);
	if (var$0 && !taskClassName->equals("com.sun.tools.javac.api.BasicJavacTask"_s)) {
		$throwNew($IllegalArgumentException);
	}
	return getJavacTrees($JavaCompiler$CompilationTask::class$, task);
}

Trees* Trees::instance($ProcessingEnvironment* env) {
	if (!$nc($($nc($of(env))->getClass()->getName()))->equals("com.sun.tools.javac.processing.JavacProcessingEnvironment"_s)) {
		$throwNew($IllegalArgumentException);
	}
	return getJavacTrees($ProcessingEnvironment::class$, env);
}

Trees* Trees::getJavacTrees($Class* argType, Object$* arg) {
	$load(Trees);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, cl, $nc($of(arg))->getClass()->getClassLoader());
		$Class* c = $Class::forName("com.sun.tools.javac.api.JavacTrees"_s, false, cl);
		argType = $Class::forName($($nc(argType)->getName()), false, cl);
		$var($Method, m, $nc(c)->getMethod("instance"_s, $$new($ClassArray, {argType})));
		return $cast(Trees, $nc(m)->invoke(nullptr, $$new($ObjectArray, {arg})));
	} catch ($ReflectiveOperationException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

Trees::Trees() {
}

$Class* Trees::load$($String* name, bool initialize) {
	$loadClass(Trees, name, initialize, &_Trees_ClassInfo_, allocate$Trees);
	return class$;
}

$Class* Trees::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com