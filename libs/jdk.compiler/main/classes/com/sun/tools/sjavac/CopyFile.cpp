#include <com/sun/tools/sjavac/CopyFile.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/URI.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardCopyOption.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef REPLACE_EXISTING

using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $Log = ::com::sun::tools::sjavac::Log;
using $Util = ::com::sun::tools::sjavac::Util;
using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardCopyOption = ::java::nio::file::StandardCopyOption;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

void CopyFile::init$() {
}

void CopyFile::setExtra($String* e) {
}

void CopyFile::setExtra($Options* a) {
}

bool CopyFile::transform($CompilationService* compilationService, $Map* pkgSrcs, $Set* visibleSrcs, $Map* oldPackageDependents, $URI* destRoot, $Map* packageArtifacts, $Map* packageDependencies, $Map* packageCpDependencies, $Map* packagePubapis, $Map* dependencyPubapis, int32_t debugLevel, bool incremental, int32_t numCores) {
	$useLocalObjectStack();
	bool rc = true;
	$var($String, dest_filename, nullptr);
	$var($File, dest, nullptr);
	{
		$var($Iterator, i$, $$nc($nc(pkgSrcs)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkgName, $cast($String, i$->next()));
			{
				$var($String, pkgNameF, $Util::toFileSystemPath(pkgName));
				{
					$var($Iterator, i$, $$sure($Set, pkgSrcs->get(pkgName))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($URI, u, $cast($URI, i$->next()));
						{
							$var($File, src, $new($File, u));
							$var($File, destDir, nullptr);
							$assign(destDir, $new($File, $$str({$($nc(destRoot)->getPath()), $File::separator, pkgNameF})));
							$var($StringBuilder, var$0, $new($StringBuilder));
							var$0->append($(destRoot->getPath()));
							var$0->append($File::separator);
							var$0->append(pkgNameF);
							var$0->append($File::separator);
							var$0->append($(src->getName()));
							$assign(dest_filename, $str(var$0));
							$assign(dest, $new($File, dest_filename));
							if (!destDir->isDirectory()) {
								if (!destDir->mkdirs()) {
									$Log::error($$str({"Error: The copier could not create the directory "_s, $(destDir->getPath())}));
									return false;
								}
							}
							$var($Set, as, $cast($Set, $nc(packageArtifacts)->get(pkgName)));
							if (as == nullptr) {
								$assign(as, $new($HashSet));
								packageArtifacts->put(pkgName, as);
							}
							$nc(as)->add($(dest->toURI()));
							bool var$1 = dest->exists();
							if (var$1) {
								int64_t var$2 = dest->lastModified();
								var$1 = var$2 > src->lastModified();
							}
							if (var$1) {
								continue;
							}
							$Log::info($$str({"Copying "_s, pkgNameF, $File::separator, $(src->getName())}));
							try {
								$var($Path, var$3, src->toPath());
								$init($StandardCopyOption);
								$Files::copy(var$3, $(dest->toPath()), $$new($CopyOptionArray, {$StandardCopyOption::REPLACE_EXISTING}));
							} catch ($IOException& e) {
								$var($StringBuilder, var$4, $new($StringBuilder));
								var$4->append("Could not copy the file "_s);
								var$4->append($(src->getPath()));
								var$4->append(" to "_s);
								var$4->append($(dest->getPath()));
								$Log::error($$str(var$4));
								rc = false;
							}
						}
					}
				}
			}
		}
	}
	return rc;
}

CopyFile::CopyFile() {
}

$Class* CopyFile::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CopyFile, init$, void)},
		{"setExtra", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CopyFile, setExtra, void, $String*)},
		{"setExtra", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC, $virtualMethod(CopyFile, setExtra, void, $Options*)},
		{"transform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;Ljava/net/URI;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;IZI)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;IZI)Z", $PUBLIC, $virtualMethod(CopyFile, transform, bool, $CompilationService*, $Map*, $Set*, $Map*, $URI*, $Map*, $Map*, $Map*, $Map*, $Map*, int32_t, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.CopyFile",
		"java.lang.Object",
		"com.sun.tools.sjavac.Transformer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CopyFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CopyFile);
	});
	return class$;
}

$Class* CopyFile::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com