#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/util/DocSourcePositions.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTrees.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/source/util/SourcePositions.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/Trees.h>
#include <com/sun/tools/javac/api/JavacTaskImpl.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaCompiler.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$2.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$1.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$2.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$3.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager.h>
#include <jdk/internal/shellsupport/doc/JavadocHelper.h>
#include <jcpp.h>

#undef DECLARED
#undef HTML
#undef METHOD
#undef PACKAGE
#undef SOURCE
#undef SOURCE_PATH

using $IOExceptionArray = $Array<::java::io::IOException>;
using $JavaFileObjectArray = $Array<::javax::tools::JavaFileObject>;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $DocSourcePositions = ::com::sun::source::util::DocSourcePositions;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTrees = ::com::sun::source::util::DocTrees;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $TreePath = ::com::sun::source::util::TreePath;
using $Trees = ::com::sun::source::util::Trees;
using $JavacTaskImpl = ::com::sun::tools::javac::api::JavacTaskImpl;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $TreeMap = ::java::util::TreeMap;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $ElementFilter = ::javax::lang::model::util::ElementFilter;
using $Elements = ::javax::lang::model::util::Elements;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaCompiler$CompilationTask = ::javax::tools::JavaCompiler$CompilationTask;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $SimpleJavaFileObject = ::javax::tools::SimpleJavaFileObject;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;
using $JavadocHelper = ::jdk::internal::shellsupport::doc::JavadocHelper;
using $JavadocHelper$2 = ::jdk::internal::shellsupport::doc::JavadocHelper$2;
using $JavadocHelper$OnDemandJavadocHelper$1 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$1;
using $JavadocHelper$OnDemandJavadocHelper$2 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$2;
using $JavadocHelper$OnDemandJavadocHelper$3 = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$3;
using $JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager = ::jdk::internal::shellsupport::doc::JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0 : public $Iterable {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$(JavadocHelper$OnDemandJavadocHelper* inst, $JavacTask* task, $Element* element) {
		$set(this, inst$, inst);
		$set(this, task, task);
		$set(this, element, element);
	}
	virtual $Iterator* iterator() override {
		 return $nc(inst$)->lambda$getResolvedDocComment$0(task, element);
	}
	JavadocHelper$OnDemandJavadocHelper* inst$ = nullptr;
	$JavacTask* task = nullptr;
	$Element* element = nullptr;
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, inst$)},
		{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, task)},
		{"element", "Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, element)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, init$, void, JavadocHelper$OnDemandJavadocHelper*, $JavacTask*, $Element*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1 : public $Comparator {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* span1, Object$* span2) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$1($cast($ints, span1), $cast($ints, span2));
	}
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sup) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$2($cast($Element, sup));
	}
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3 : public $Predicate {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JavacTask* task, $ExecutableElement* method, $TypeElement* type) {
		$set(this, task, task);
		$set(this, method, method);
		$set(this, type, type);
	}
	virtual bool test(Object$* supMethod) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$3(task, method, type, $cast($ExecutableElement, supMethod));
	}
	$JavacTask* task = nullptr;
	$ExecutableElement* method = nullptr;
	$TypeElement* type = nullptr;
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, task)},
		{"method", "Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, method)},
		{"type", "Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/TypeElement;)V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, init$, void, $JavacTask*, $ExecutableElement*, $TypeElement*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, $NO_CLASS_INIT, $Function)
public:
	void init$(JavadocHelper$OnDemandJavadocHelper* inst, $JavacTask* task) {
		$set(this, inst$, inst);
		$set(this, task, task);
	}
	virtual $Object* apply(Object$* el) override {
		 return $nc(inst$)->lambda$superTypeForInheritDoc$4(task, $cast($Element, el));
	}
	JavadocHelper$OnDemandJavadocHelper* inst$ = nullptr;
	$JavacTask* task = nullptr;
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, inst$)},
		{"task", "Lcom/sun/source/util/JavacTask;", nullptr, $PUBLIC, $field(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, task)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/shellsupport/doc/JavadocHelper$OnDemandJavadocHelper;Lcom/sun/source/util/JavacTask;)V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, init$, void, JavadocHelper$OnDemandJavadocHelper*, $JavacTask*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5 : public $Predicate {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* tm) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$5($cast($TypeMirror, tm));
	}
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6 : public $Function {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* tm) override {
		 return JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$6($cast($TypeMirror, tm));
	}
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::class$ = nullptr;

class JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7 : public $DiagnosticListener {
	$class(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7, $NO_CLASS_INIT, $DiagnosticListener)
public:
	void init$() {
	}
	virtual void report($Diagnostic* d) override {
		JavadocHelper$OnDemandJavadocHelper::lambda$findSource$7(d);
	}
};
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7, init$, void)},
		{"report", "(Ljavax/tools/Diagnostic;)V", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7, report, void, $Diagnostic*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7",
		"java.lang.Object",
		"javax.tools.DiagnosticListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7);
	});
	return class$;
}
$Class* JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::class$ = nullptr;

void JavadocHelper$OnDemandJavadocHelper::init$($JavacTask* mainTask, $StandardJavaFileManager* fm) {
	$JavadocHelper::init$();
	$set(this, signature2Source, $new($HashMap));
	$set(this, mainTask, mainTask);
	$load($JavaFileManager);
	$set(this, baseFileManager, $cast($JavaFileManager, $$nc($nc($cast($JavacTaskImpl, mainTask))->getContext())->get($JavaFileManager::class$)));
	$set(this, fm, fm);
}

$String* JavadocHelper$OnDemandJavadocHelper::getResolvedDocComment($Element* forElement) {
	$var($Pair, sourceElement, getSourceElement(this->mainTask, forElement));
	if (sourceElement == nullptr) {
		return nullptr;
	}
	return getResolvedDocComment($cast($JavacTask, $nc(sourceElement)->fst), $cast($TreePath, $nc(sourceElement)->snd));
}

$Element* JavadocHelper$OnDemandJavadocHelper::getSourceElement($Element* forElement) {
	$useLocalObjectStack();
	$var($Pair, sourceElement, getSourceElement(this->mainTask, forElement));
	if (sourceElement == nullptr) {
		return forElement;
	}
	$var($Element, result, $$nc($Trees::instance($cast($JavaCompiler$CompilationTask, $nc(sourceElement)->fst)))->getElement($cast($TreePath, $nc(sourceElement)->snd)));
	if (result == nullptr) {
		return forElement;
	}
	return result;
}

$String* JavadocHelper$OnDemandJavadocHelper::getResolvedDocComment($JavacTask* task, $TreePath* el) {
	$useLocalObjectStack();
	$var($DocTrees, trees, $DocTrees::instance(task));
	$var($Element, element, $nc(trees)->getElement(el));
	$var($String, docComment, trees->getDocComment(el));
	$init($ElementKind);
	if (docComment == nullptr && $nc(element)->getKind() == $ElementKind::METHOD) {
		$var($ExecutableElement, executableElement, $cast($ExecutableElement, element));
		$var($Iterable, superTypes, $new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0, this, task, element));
		{
			$var($Iterator, i$, $nc(superTypes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, sup, $cast($Element, i$->next()));
				{
					$var($Iterator, i$, $$nc($ElementFilter::methodsIn($($nc(sup)->getEnclosedElements())))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($ExecutableElement, supMethod, $cast($ExecutableElement, i$->next()));
						{
							$var($TypeElement, clazz, $cast($TypeElement, executableElement->getEnclosingElement()));
							if ($$nc($nc(task)->getElements())->overrides(executableElement, supMethod, clazz)) {
								$var($Pair, source, getSourceElement(task, supMethod));
								if (source != nullptr) {
									$var($String, overriddenComment, getResolvedDocComment($cast($JavacTask, source->fst), $cast($TreePath, source->snd)));
									if (overriddenComment != nullptr) {
										return overriddenComment;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (docComment == nullptr) {
		return nullptr;
	}
	$var($Pair, parsed, parseDocComment(task, docComment));
	$var($DocCommentTree, docCommentTree, $cast($DocCommentTree, $nc(parsed)->fst));
	int32_t offset = $nc($cast($Integer, parsed->snd))->intValue();
	$var($IOExceptionArray, exception, $new($IOExceptionArray, 1));
	$var($Comparator, spanComp, $new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1));
	$var($Map, replace, $cast($AbstractMap, $new($TreeMap, spanComp)));
	$var($DocSourcePositions, sp, $cast($DocSourcePositions, trees->getSourcePositions()));
	$$new($JavadocHelper$OnDemandJavadocHelper$1, this, offset, task, element, el, docCommentTree, exception, sp, replace, docComment)->scan($cast($DocTree, docCommentTree), ($Void*)nullptr);
	if (replace->isEmpty()) {
		return docComment;
	}
	$var($StringBuilder, replacedInheritDoc, $new($StringBuilder, docComment));
	{
		$var($Iterator, i$, $$nc(replace->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				int32_t var$0 = $nc(($$cast($ints, $nc(e)->getKey())))->get(0) - offset;
				replacedInheritDoc->delete$(var$0, $nc(($$cast($ints, e->getKey())))->get(1) - offset);
				int32_t var$1 = $nc(($$cast($ints, e->getKey())))->get(0) - offset;
				replacedInheritDoc->insert(var$1, $$cast($String, $$nc($$sure($List, e->getValue())->stream())->collect($($Collectors::joining(""_s)))));
			}
		}
	}
	return replacedInheritDoc->toString();
}

$Stream* JavadocHelper$OnDemandJavadocHelper::superMethodsForInheritDoc($JavacTask* task, $ExecutableElement* method) {
	$useLocalObjectStack();
	$var($TypeElement, type, $cast($TypeElement, $nc(method)->getEnclosingElement()));
	return $$nc($$nc(this->superTypeForInheritDoc(task, $cast($Parameterizable, type)))->flatMap($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2)))->filter($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3, task, method, type));
}

$Stream* JavadocHelper$OnDemandJavadocHelper::superTypeForInheritDoc($JavacTask* task, $Element* type) {
	$useLocalObjectStack();
	$var($TypeElement, clazz, $cast($TypeElement, type));
	$var($Stream, result, interfaces(clazz));
	$assign(result, $Stream::concat(result, $($$nc(interfaces(clazz))->flatMap($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4, this, task)))));
	$init($TypeKind);
	if ($$nc($nc(clazz)->getSuperclass())->getKind() == $TypeKind::DECLARED) {
		$var($Element, superClass, $$sure($DeclaredType, clazz->getSuperclass())->asElement());
		$assign(result, $Stream::concat(result, $($Stream::of(superClass))));
		$assign(result, $Stream::concat(result, $(superTypeForInheritDoc(task, superClass))));
	}
	return result;
}

$Stream* JavadocHelper$OnDemandJavadocHelper::interfaces($TypeElement* clazz) {
	$useLocalObjectStack();
	return $$nc($$nc($$nc($nc(clazz)->getInterfaces())->stream())->filter($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5)))->map($$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6));
}

$DocTree* JavadocHelper$OnDemandJavadocHelper::parseBlockTag($JavacTask* task, $String* blockTag) {
	$useLocalObjectStack();
	$var($DocCommentTree, dc, $cast($DocCommentTree, $nc($(parseDocComment(task, blockTag)))->fst));
	return $cast($DocTree, $$nc($nc(dc)->getBlockTags())->get(0));
}

$Pair* JavadocHelper$OnDemandJavadocHelper::parseDocComment($JavacTask* task, $String* javadoc) {
	$useLocalObjectStack();
	$var($DocTrees, trees, $DocTrees::instance(task));
	try {
		$init($JavaFileObject$Kind);
		$var($SimpleJavaFileObject, fo, $new($JavadocHelper$OnDemandJavadocHelper$2, this, $$new($URI, "mem://doc.html"_s), $JavaFileObject$Kind::HTML, javadoc));
		$var($DocCommentTree, tree, $nc(trees)->getDocCommentTree(fo));
		int32_t offset = (int32_t)$$sure($DocSourcePositions, trees->getSourcePositions())->getStartPosition(nullptr, tree, tree);
		offset += "<body>"_s->length();
		return $Pair::of(tree, $($Integer::valueOf(offset)));
	} catch ($URISyntaxException& ex) {
		$throwNew($IllegalStateException, ex);
	}
	$shouldNotReachHere();
}

$String* JavadocHelper$OnDemandJavadocHelper::getThrownException($JavacTask* task, $TreePath* rootOn, $DocCommentTree* comment, $ThrowsTree* tt) {
	$useLocalObjectStack();
	$var($DocTrees, trees, $DocTrees::instance(task));
	$var($DocTreePath, var$0, $new($DocTreePath, rootOn, comment));
	$var($Element, exc, $nc(trees)->getElement($$new($DocTreePath, var$0, $($nc(tt)->getExceptionName()))));
	return exc != nullptr ? exc->toString() : ($String*)nullptr;
}

$Pair* JavadocHelper$OnDemandJavadocHelper::getSourceElement($JavacTask* origin, $Element* el) {
	$useLocalObjectStack();
	$var($String, handle, elementSignature(el));
	$var($Pair, cached, $cast($Pair, this->signature2Source->get(handle)));
	if (cached != nullptr) {
		return cached->fst != nullptr ? cached : ($Pair*)nullptr;
	}
	$var($TypeElement, type, topLevelType(el));
	if (type == nullptr) {
		return nullptr;
	}
	$var($Elements, elements, $nc(origin)->getElements());
	$var($String, binaryName, $$nc($nc(elements)->getBinaryName(type))->toString());
	$var($ModuleElement, module, elements->getModuleOf($cast($Parameterizable, type)));
	$var($String, moduleName, module == nullptr || module->isUnnamed() ? ($String*)nullptr : $$nc(module->getQualifiedName())->toString());
	$var($Pair, source, findSource(moduleName, binaryName));
	if (source == nullptr) {
		return nullptr;
	}
	fillElementCache($cast($JavacTask, $nc(source)->fst), $cast($CompilationUnitTree, $nc(source)->snd));
	$assign(cached, $cast($Pair, this->signature2Source->get(handle)));
	if (cached != nullptr) {
		return cached;
	} else {
		this->signature2Source->put(handle, $($Pair::of(nullptr, nullptr)));
		return nullptr;
	}
}

$String* JavadocHelper$OnDemandJavadocHelper::elementSignature($Element* el) {
	$useLocalObjectStack();
	$init($JavadocHelper$2);
	$var($StringBuilder, header, nullptr);
	$var($String, sep, nullptr);
	$var($ExecutableElement, method, nullptr);
	switch ($nc($JavadocHelper$2::$SwitchMap$javax$lang$model$element$ElementKind)->get(($$nc($nc(el)->getKind()))->ordinal())) {
	case 1:
	case 2:
	case 3:
	case 4:
		return $$nc($cast($TypeElement, el)->getQualifiedName())->toString();
	case 5:
		{
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($(elementSignature($(el->getEnclosingElement()))));
			var$0->append("."_s);
			var$0->append($(el->getSimpleName()));
			var$0->append(":"_s);
			var$0->append($(el->asType()));
			return $str(var$0);
		}
	case 6:
		{
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append($(elementSignature($(el->getEnclosingElement()))));
			var$1->append("."_s);
			var$1->append($(el->getSimpleName()));
			return $str(var$1);
		}
	case 7:
	case 8:
	case 9:
	case 10:
		{
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append($(el->getSimpleName()));
			var$2->append(":"_s);
			var$2->append($(el->asType()));
			return $str(var$2);
		}
	case 11:
	case 12:
		{
			$assign(header, $new($StringBuilder));
			header->append($(elementSignature($(el->getEnclosingElement()))));
			if (el->getKind() == $ElementKind::METHOD) {
				header->append("."_s);
				header->append($(el->getSimpleName()));
			}
			header->append("("_s);
			$assign(sep, ""_s);
			$assign(method, $cast($ExecutableElement, el));
			{
				$var($Iterator, i, $$nc(method->getParameters())->iterator());
				for (; $nc(i)->hasNext();) {
					$var($VariableElement, p, $cast($VariableElement, i->next()));
					header->append(sep);
					header->append($($nc(p)->asType()));
					$assign(sep, ", "_s);
				}
			}
			header->append(")"_s);
			return header->toString();
		}
	default:
		return $of(el)->toString();
	}
}

$TypeElement* JavadocHelper$OnDemandJavadocHelper::topLevelType($Element* el$renamed) {
	$useLocalObjectStack();
	$var($Element, el, el$renamed);
	$init($ElementKind);
	if ($nc(el)->getKind() == $ElementKind::PACKAGE) {
		return nullptr;
	}
	while (el != nullptr && $$nc(el->getEnclosingElement())->getKind() != $ElementKind::PACKAGE) {
		$assign(el, el->getEnclosingElement());
	}
	bool var$0 = el != nullptr;
	if (var$0) {
		bool var$1 = $$nc(el->getKind())->isClass();
		var$0 = var$1 || $$nc(el->getKind())->isInterface();
	}
	return var$0 ? $cast($TypeElement, el) : ($TypeElement*)nullptr;
}

void JavadocHelper$OnDemandJavadocHelper::fillElementCache($JavacTask* task, $CompilationUnitTree* cut) {
	$useLocalObjectStack();
	$var($Trees, trees, $Trees::instance(task));
	$$new($JavadocHelper$OnDemandJavadocHelper$3, this, trees, task)->scan(cut, nullptr);
}

$Pair* JavadocHelper$OnDemandJavadocHelper::findSource($String* moduleName, $String* binaryName) {
	$useLocalObjectStack();
	$init($StandardLocation);
	$init($JavaFileObject$Kind);
	$var($JavaFileObject, jfo, $nc(this->fm)->getJavaFileForInput($StandardLocation::SOURCE_PATH, binaryName, $JavaFileObject$Kind::SOURCE));
	if (jfo == nullptr) {
		return nullptr;
	}
	$var($List, jfos, $Arrays::asList($$new($JavaFileObjectArray, {jfo})));
	$var($JavaFileManager, patchFM, moduleName != nullptr ? $cast($JavaFileManager, $new($JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager, this->baseFileManager, jfo, moduleName)) : this->baseFileManager);
	$init($JavadocHelper);
	$var($JavacTaskImpl, task, $cast($JavacTaskImpl, $nc($JavadocHelper::compiler)->getTask(nullptr, patchFM, $$new(JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7), nullptr, nullptr, jfos)));
	$var($Iterable, cuts, $nc(task)->parse());
	task->enter();
	return $Pair::of(task, $$cast($CompilationUnitTree, $$nc($nc(cuts)->iterator())->next()));
}

void JavadocHelper$OnDemandJavadocHelper::close() {
	$nc(this->fm)->close();
}

void JavadocHelper$OnDemandJavadocHelper::lambda$findSource$7($Diagnostic* d) {
	$init(JavadocHelper$OnDemandJavadocHelper);
}

$Element* JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$6($TypeMirror* tm) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	return $nc($cast($DeclaredType, tm))->asElement();
}

bool JavadocHelper$OnDemandJavadocHelper::lambda$interfaces$5($TypeMirror* tm) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	$init($TypeKind);
	return $nc(tm)->getKind() == $TypeKind::DECLARED;
}

$Stream* JavadocHelper$OnDemandJavadocHelper::lambda$superTypeForInheritDoc$4($JavacTask* task, $Element* el) {
	return superTypeForInheritDoc(task, el);
}

bool JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$3($JavacTask* task, $ExecutableElement* method, $TypeElement* type, $ExecutableElement* supMethod) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	return $$nc($nc(task)->getElements())->overrides(method, supMethod, type);
}

$Stream* JavadocHelper$OnDemandJavadocHelper::lambda$superMethodsForInheritDoc$2($Element* sup) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	$useLocalObjectStack();
	return $$nc($ElementFilter::methodsIn($($nc(sup)->getEnclosedElements())))->stream();
}

int32_t JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$1($ints* span1, $ints* span2) {
	$init(JavadocHelper$OnDemandJavadocHelper);
	return $nc(span1)->get(0) != $nc(span2)->get(0) ? span2->get(0) - span1->get(0) : span2->get(1) - span1->get(0);
}

$Iterator* JavadocHelper$OnDemandJavadocHelper::lambda$getResolvedDocComment$0($JavacTask* task, $Element* element) {
	$useLocalObjectStack();
	return $$nc(superTypeForInheritDoc(task, $($nc(element)->getEnclosingElement())))->iterator();
}

JavadocHelper$OnDemandJavadocHelper::JavadocHelper$OnDemandJavadocHelper() {
}

$Class* JavadocHelper$OnDemandJavadocHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$getResolvedDocComment$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superMethodsForInheritDoc$3$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$superTypeForInheritDoc$4$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$5$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$interfaces$6$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7")) {
			return JavadocHelper$OnDemandJavadocHelper$$Lambda$lambda$findSource$7$7::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"mainTask", "Lcom/sun/source/util/JavacTask;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, mainTask)},
		{"baseFileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, baseFileManager)},
		{"fm", "Ljavax/tools/StandardJavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, fm)},
		{"signature2Source", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;>;>;", $PRIVATE | $FINAL, $field(JavadocHelper$OnDemandJavadocHelper, signature2Source)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/JavacTask;Ljavax/tools/StandardJavaFileManager;)V", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, init$, void, $JavacTask*, $StandardJavaFileManager*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper, close, void), "java.io.IOException"},
		{"elementSignature", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, elementSignature, $String*, $Element*)},
		{"fillElementCache", "(Lcom/sun/source/util/JavacTask;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, fillElementCache, void, $JavacTask*, $CompilationUnitTree*), "java.io.IOException"},
		{"findSource", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair;", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/util/JavacTask;Lcom/sun/source/tree/CompilationUnitTree;>;", $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, findSource, $Pair*, $String*, $String*), "java.io.IOException"},
		{"getResolvedDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper, getResolvedDocComment, $String*, $Element*), "java.io.IOException"},
		{"getResolvedDocComment", "(Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, getResolvedDocComment, $String*, $JavacTask*, $TreePath*), "java.io.IOException"},
		{"getSourceElement", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/Element;", nullptr, $PUBLIC, $virtualMethod(JavadocHelper$OnDemandJavadocHelper, getSourceElement, $Element*, $Element*), "java.io.IOException"},
		{"getSourceElement", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;>;", $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, getSourceElement, $Pair*, $JavacTask*, $Element*), "java.io.IOException"},
		{"getThrownException", "(Lcom/sun/source/util/JavacTask;Lcom/sun/source/util/TreePath;Lcom/sun/source/doctree/DocCommentTree;Lcom/sun/source/doctree/ThrowsTree;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, getThrownException, $String*, $JavacTask*, $TreePath*, $DocCommentTree*, $ThrowsTree*)},
		{"interfaces", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/stream/Stream;", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/stream/Stream<Ljavax/lang/model/element/Element;>;", $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, interfaces, $Stream*, $TypeElement*)},
		{"lambda$findSource$7", "(Ljavax/tools/Diagnostic;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocHelper$OnDemandJavadocHelper, lambda$findSource$7, void, $Diagnostic*)},
		{"lambda$getResolvedDocComment$0", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/Iterator;", nullptr, $PRIVATE | $SYNTHETIC, $method(JavadocHelper$OnDemandJavadocHelper, lambda$getResolvedDocComment$0, $Iterator*, $JavacTask*, $Element*)},
		{"lambda$getResolvedDocComment$1", "([I[I)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocHelper$OnDemandJavadocHelper, lambda$getResolvedDocComment$1, int32_t, $ints*, $ints*)},
		{"lambda$interfaces$5", "(Ljavax/lang/model/type/TypeMirror;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocHelper$OnDemandJavadocHelper, lambda$interfaces$5, bool, $TypeMirror*)},
		{"lambda$interfaces$6", "(Ljavax/lang/model/type/TypeMirror;)Ljavax/lang/model/element/Element;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocHelper$OnDemandJavadocHelper, lambda$interfaces$6, $Element*, $TypeMirror*)},
		{"lambda$superMethodsForInheritDoc$2", "(Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocHelper$OnDemandJavadocHelper, lambda$superMethodsForInheritDoc$2, $Stream*, $Element*)},
		{"lambda$superMethodsForInheritDoc$3", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/TypeElement;Ljavax/lang/model/element/ExecutableElement;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavadocHelper$OnDemandJavadocHelper, lambda$superMethodsForInheritDoc$3, bool, $JavacTask*, $ExecutableElement*, $TypeElement*, $ExecutableElement*)},
		{"lambda$superTypeForInheritDoc$4", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $SYNTHETIC, $method(JavadocHelper$OnDemandJavadocHelper, lambda$superTypeForInheritDoc$4, $Stream*, $JavacTask*, $Element*)},
		{"parseBlockTag", "(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/source/doctree/DocTree;", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, parseBlockTag, $DocTree*, $JavacTask*, $String*)},
		{"parseDocComment", "(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair;", "(Lcom/sun/source/util/JavacTask;Ljava/lang/String;)Lcom/sun/tools/javac/util/Pair<Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Integer;>;", $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, parseDocComment, $Pair*, $JavacTask*, $String*)},
		{"superMethodsForInheritDoc", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;)Ljava/util/stream/Stream;", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/ExecutableElement;)Ljava/util/stream/Stream<Ljavax/lang/model/element/ExecutableElement;>;", $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, superMethodsForInheritDoc, $Stream*, $JavacTask*, $ExecutableElement*)},
		{"superTypeForInheritDoc", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream;", "(Lcom/sun/source/util/JavacTask;Ljavax/lang/model/element/Element;)Ljava/util/stream/Stream<Ljavax/lang/model/element/Element;>;", $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, superTypeForInheritDoc, $Stream*, $JavacTask*, $Element*)},
		{"topLevelType", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/TypeElement;", nullptr, $PRIVATE, $method(JavadocHelper$OnDemandJavadocHelper, topLevelType, $TypeElement*, $Element*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "jdk.internal.shellsupport.doc.JavadocHelper", "OnDemandJavadocHelper", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$PatchModuleFileManager", "jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper", "PatchModuleFileManager", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$3", nullptr, nullptr, 0},
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$2", nullptr, nullptr, 0},
		{"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.shellsupport.doc.JavadocHelper$OnDemandJavadocHelper",
		"jdk.internal.shellsupport.doc.JavadocHelper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.shellsupport.doc.JavadocHelper"
	};
	$loadClass(JavadocHelper$OnDemandJavadocHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocHelper$OnDemandJavadocHelper);
	});
	return class$;
}

$Class* JavadocHelper$OnDemandJavadocHelper::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk