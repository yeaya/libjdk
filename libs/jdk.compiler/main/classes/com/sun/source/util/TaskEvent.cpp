#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/util/TaskEvent$Kind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void TaskEvent::init$($TaskEvent$Kind* kind) {
	TaskEvent::init$(kind, nullptr, nullptr, nullptr);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $JavaFileObject* sourceFile) {
	TaskEvent::init$(kind, sourceFile, nullptr, nullptr);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $CompilationUnitTree* unit) {
	TaskEvent::init$(kind, $($nc(unit)->getSourceFile()), unit, nullptr);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $CompilationUnitTree* unit, $TypeElement* clazz) {
	TaskEvent::init$(kind, $($nc(unit)->getSourceFile()), unit, clazz);
}

void TaskEvent::init$($TaskEvent$Kind* kind, $JavaFileObject* file, $CompilationUnitTree* unit, $TypeElement* clazz) {
	$set(this, kind, kind);
	$set(this, file, file);
	$set(this, unit, unit);
	$set(this, clazz, clazz);
}

$TaskEvent$Kind* TaskEvent::getKind() {
	return this->kind;
}

$JavaFileObject* TaskEvent::getSourceFile() {
	return this->file;
}

$CompilationUnitTree* TaskEvent::getCompilationUnit() {
	return this->unit;
}

$TypeElement* TaskEvent::getTypeElement() {
	return this->clazz;
}

$String* TaskEvent::toString() {
	return $str({"TaskEvent["_s, this->kind, ","_s, this->file, ","_s, this->clazz, "]"_s});
}

TaskEvent::TaskEvent() {
}

$Class* TaskEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kind", "Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PRIVATE, $field(TaskEvent, kind)},
		{"file", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $field(TaskEvent, file)},
		{"unit", "Lcom/sun/source/tree/CompilationUnitTree;", nullptr, $PRIVATE, $field(TaskEvent, unit)},
		{"clazz", "Ljavax/lang/model/element/TypeElement;", nullptr, $PRIVATE, $field(TaskEvent, clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;)V", nullptr, $PUBLIC, $method(TaskEvent, init$, void, $TaskEvent$Kind*)},
		{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Ljavax/tools/JavaFileObject;)V", nullptr, $PUBLIC, $method(TaskEvent, init$, void, $TaskEvent$Kind*, $JavaFileObject*)},
		{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC, $method(TaskEvent, init$, void, $TaskEvent$Kind*, $CompilationUnitTree*)},
		{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Lcom/sun/source/tree/CompilationUnitTree;Ljavax/lang/model/element/TypeElement;)V", nullptr, $PUBLIC, $method(TaskEvent, init$, void, $TaskEvent$Kind*, $CompilationUnitTree*, $TypeElement*)},
		{"<init>", "(Lcom/sun/source/util/TaskEvent$Kind;Ljavax/tools/JavaFileObject;Lcom/sun/source/tree/CompilationUnitTree;Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(TaskEvent, init$, void, $TaskEvent$Kind*, $JavaFileObject*, $CompilationUnitTree*, $TypeElement*)},
		{"getCompilationUnit", "()Lcom/sun/source/tree/CompilationUnitTree;", nullptr, $PUBLIC, $method(TaskEvent, getCompilationUnit, $CompilationUnitTree*)},
		{"getKind", "()Lcom/sun/source/util/TaskEvent$Kind;", nullptr, $PUBLIC, $method(TaskEvent, getKind, $TaskEvent$Kind*)},
		{"getSourceFile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $method(TaskEvent, getSourceFile, $JavaFileObject*)},
		{"getTypeElement", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC, $method(TaskEvent, getTypeElement, $TypeElement*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TaskEvent, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.TaskEvent$Kind", "com.sun.source.util.TaskEvent", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.source.util.TaskEvent",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.source.util.TaskEvent$Kind"
	};
	$loadClass(TaskEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TaskEvent);
	});
	return class$;
}

$Class* TaskEvent::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com