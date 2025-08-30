#include "NG\WAD02.h"

namespace Loader
{

    namespace
    {
        S32 memCB_domDir;

    } // namespace

    S32 GetMemCallbacks_DomainDirectory()
    {
        return memCB_domDir;
    }

} // namespace Loader

namespace Domains
{
    //void MemHandle::Data() const
}

namespace Graphics
{
}
