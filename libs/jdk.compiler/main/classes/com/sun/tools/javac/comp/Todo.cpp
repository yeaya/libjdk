#include <com/sun/tools/javac/comp/Todo.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Todo$FileQueue.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Map.h>
#include <java/util/Queue.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $Todo$FileQueue = ::com::sun::tools::javac::comp::Todo$FileQueue;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Queue = ::java::util::Queue;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Context$Key* Todo::todoKey = nullptr;

Todo* Todo::instance($Context* context) {
	$init(Todo);
	$var(Todo, instance, $cast(Todo, $nc(context)->get(Todo::todoKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Todo, context));
	}
	return instance;
}

void Todo::init$($Context* context) {
	$AbstractQueue::init$();
	$set(this, contents, $new($LinkedList));
	$nc(context)->put(Todo::todoKey, this);
}

void Todo::append($Env* env) {
	add(env);
}

$Iterator* Todo::iterator() {
	return $nc(this->contents)->iterator();
}

int32_t Todo::size() {
	return $nc(this->contents)->size();
}

bool Todo::offer($Env* e) {
	if ($nc(this->contents)->add(e)) {
		if (this->contentsByFile != nullptr) {
			addByFile(e);
		}
		return true;
	} else {
		return false;
	}
}

void Todo::retainFiles($Collection* sourceFiles) {
	$useLocalObjectStack();
	$var($Iterator, it, $nc(this->contents)->iterator());
	for (; $nc(it)->hasNext();) {
		$var($Env, env, $cast($Env, it->next()));
		if (!$nc(sourceFiles)->contains($nc($nc(env)->toplevel)->sourcefile)) {
			if (this->contentsByFile != nullptr) {
				removeByFile(env);
			}
			it->remove();
		}
	}
}

$Object* Todo::poll() {
	if (size() == 0) {
		return nullptr;
	}
	$var($Env, env, $cast($Env, $nc(this->contents)->remove(0)));
	if (this->contentsByFile != nullptr) {
		removeByFile(env);
	}
	return env;
}

$Object* Todo::peek() {
	return (size() == 0 ? ($Env*)nullptr : $cast($Env, $nc(this->contents)->get(0)));
}

$Queue* Todo::groupByFile() {
	$useLocalObjectStack();
	if (this->contentsByFile == nullptr) {
		$set(this, contentsByFile, $new($LinkedList));
		{
			$var($Iterator, i$, $nc(this->contents)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Env, env, $cast($Env, i$->next()));
				{
					addByFile(env);
				}
			}
		}
	}
	return this->contentsByFile;
}

void Todo::addByFile($Env* env) {
	$useLocalObjectStack();
	$var($JavaFileObject, file, $nc($nc(env)->toplevel)->sourcefile);
	if (this->fileMap == nullptr) {
		$set(this, fileMap, $new($HashMap));
	}
	$var($Todo$FileQueue, fq, $cast($Todo$FileQueue, $nc(this->fileMap)->get(file)));
	if (fq == nullptr) {
		$assign(fq, $new($Todo$FileQueue, this));
		this->fileMap->put(file, fq);
		$nc(this->contentsByFile)->add(fq);
	}
	$nc($nc(fq)->fileContents)->add(env);
}

void Todo::removeByFile($Env* env) {
	$useLocalObjectStack();
	$var($JavaFileObject, file, $nc($nc(env)->toplevel)->sourcefile);
	$var($Todo$FileQueue, fq, $cast($Todo$FileQueue, $nc(this->fileMap)->get(file)));
	if (fq == nullptr) {
		return;
	}
	if ($nc($nc(fq)->fileContents)->remove(env)) {
		if (fq->isEmpty()) {
			this->fileMap->remove(file);
			$nc(this->contentsByFile)->remove(fq);
		}
	}
}

bool Todo::offer(Object$* e) {
	return this->offer($cast($Env, e));
}

void Todo::clinit$($Class* clazz) {
	$assignStatic(Todo::todoKey, $new($Context$Key));
}

Todo::Todo() {
}

$Class* Todo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"todoKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/Todo;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Todo, todoKey)},
		{"contents", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0, $field(Todo, contents)},
		{"contentsByFile", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;>;", 0, $field(Todo, contentsByFile)},
		{"fileMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/comp/Todo$FileQueue;>;", 0, $field(Todo, fileMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Todo, init$, void, $Context*)},
		{"addByFile", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(Todo, addByFile, void, $Env*)},
		{"append", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PUBLIC, $virtualMethod(Todo, append, void, $Env*)},
		{"groupByFile", "()Ljava/util/Queue;", "()Ljava/util/Queue<Ljava/util/Queue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;>;", $PUBLIC, $virtualMethod(Todo, groupByFile, $Queue*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/Todo;", nullptr, $PUBLIC | $STATIC, $staticMethod(Todo, instance, Todo*, $Context*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PUBLIC, $virtualMethod(Todo, iterator, $Iterator*)},
		{"offer", "(Lcom/sun/tools/javac/comp/Env;)Z", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Z", $PUBLIC, $virtualMethod(Todo, offer, bool, $Env*)},
		{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Todo, offer, bool, Object$*)},
		{"peek", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC, $virtualMethod(Todo, peek, $Object*)},
		{"poll", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC, $virtualMethod(Todo, poll, $Object*)},
		{"removeByFile", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(Todo, removeByFile, void, $Env*)},
		{"retainFiles", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, $virtualMethod(Todo, retainFiles, void, $Collection*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Todo, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Todo$FileQueue", "com.sun.tools.javac.comp.Todo", "FileQueue", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Todo",
		"java.util.AbstractQueue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractQueue<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Todo$FileQueue"
	};
	$loadClass(Todo, name, initialize, &classInfo$$, Todo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Todo));
	});
	return class$;
}

$Class* Todo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com