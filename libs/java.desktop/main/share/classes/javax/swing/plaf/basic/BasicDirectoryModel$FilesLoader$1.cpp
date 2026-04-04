#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader$1.h>
#include <java/io/File.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel$FilesLoader.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $BasicDirectoryModel$DoChangeContents = ::javax::swing::plaf::basic::BasicDirectoryModel$DoChangeContents;
using $BasicDirectoryModel$FilesLoader = ::javax::swing::plaf::basic::BasicDirectoryModel$FilesLoader;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDirectoryModel$FilesLoader$1::init$($BasicDirectoryModel$FilesLoader* this$1, $Vector* val$newFileCache) {
	$set(this, this$1, this$1);
	$set(this, val$newFileCache, val$newFileCache);
}

$Object* BasicDirectoryModel$FilesLoader$1::call() {
	$useLocalObjectStack();
	int32_t newSize = $nc(this->val$newFileCache)->size();
	int32_t oldSize = $nc($nc(this->this$1->this$0)->fileCache)->size();
	if (newSize > oldSize) {
		int32_t start = oldSize;
		int32_t end = newSize;
		for (int32_t i = 0; i < oldSize; ++i) {
			if (!$$sure($File, this->val$newFileCache->get(i))->equals($(this->this$1->this$0->fileCache->get(i)))) {
				start = i;
				for (int32_t j = i; j < newSize; ++j) {
					if ($$sure($File, this->val$newFileCache->get(j))->equals($(this->this$1->this$0->fileCache->get(i)))) {
						end = j;
						break;
					}
				}
				break;
			}
		}
		if (start >= 0 && end > start && $$nc(this->val$newFileCache->subList(end, newSize))->equals($(this->this$1->this$0->fileCache->subList(start, oldSize)))) {
			if ($nc(this->this$1->loadThread)->isInterrupted()) {
				return nullptr;
			}
			return $new($BasicDirectoryModel$DoChangeContents, this->this$1->this$0, $(this->val$newFileCache->subList(start, end)), start, nullptr, 0, this->this$1->fid);
		}
	} else if (newSize < oldSize) {
		int32_t start = -1;
		int32_t end = -1;
		for (int32_t i = 0; i < newSize; ++i) {
			if (!$$sure($File, this->val$newFileCache->get(i))->equals($(this->this$1->this$0->fileCache->get(i)))) {
				start = i;
				end = i + oldSize - newSize;
				break;
			}
		}
		if (start >= 0 && end > start && $$nc(this->this$1->this$0->fileCache->subList(end, oldSize))->equals($(this->val$newFileCache->subList(start, newSize)))) {
			if ($nc(this->this$1->loadThread)->isInterrupted()) {
				return nullptr;
			}
			return $new($BasicDirectoryModel$DoChangeContents, this->this$1->this$0, nullptr, 0, $$new($Vector, $(this->this$1->this$0->fileCache->subList(start, end))), start, this->this$1->fid);
		}
	}
	if (!this->this$1->this$0->fileCache->equals(this->val$newFileCache)) {
		if ($nc(this->this$1->loadThread)->isInterrupted()) {
			this->this$1->cancelRunnables();
		}
		return $new($BasicDirectoryModel$DoChangeContents, this->this$1->this$0, this->val$newFileCache, 0, this->this$1->this$0->fileCache, 0, this->this$1->fid);
	}
	return nullptr;
}

BasicDirectoryModel$FilesLoader$1::BasicDirectoryModel$FilesLoader$1() {
}

$Class* BasicDirectoryModel$FilesLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/plaf/basic/BasicDirectoryModel$FilesLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$FilesLoader$1, this$1)},
		{"val$newFileCache", "Ljava/util/Vector;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$FilesLoader$1, val$newFileCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDirectoryModel$FilesLoader;Ljava/util/Vector;)V", "()V", 0, $method(BasicDirectoryModel$FilesLoader$1, init$, void, $BasicDirectoryModel$FilesLoader*, $Vector*)},
		{"call", "()Ljavax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents;", nullptr, $PUBLIC, $virtualMethod(BasicDirectoryModel$FilesLoader$1, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader",
		"run0",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader", "javax.swing.plaf.basic.BasicDirectoryModel", "FilesLoader", $PRIVATE | $FINAL},
		{"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1", nullptr, nullptr, 0},
		{"javax.swing.plaf.basic.BasicDirectoryModel$DoChangeContents", "javax.swing.plaf.basic.BasicDirectoryModel", "DoChangeContents", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicDirectoryModel$FilesLoader$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/plaf/basic/BasicDirectoryModel$DoChangeContents;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicDirectoryModel"
	};
	$loadClass(BasicDirectoryModel$FilesLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDirectoryModel$FilesLoader$1);
	});
	return class$;
}

$Class* BasicDirectoryModel$FilesLoader$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax