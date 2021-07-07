/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

        
        
        class wxMenuItemList_iterator {
        public:
            wxMenuItemList_iterator(wxMenuItemList::compatibility_iterator start)
                : m_node(start) {}

            wxMenuItem* __next__() {
                wxMenuItem* obj = NULL;
                if (m_node) {
                    obj = (wxMenuItem*) m_node->GetData();
                    m_node = m_node->GetNext();
                }
                else {
                    PyErr_SetString(PyExc_StopIteration, "");
                }
                return (wxMenuItem*)obj;
            }
        private:
            wxMenuItemList::compatibility_iterator m_node;
        };

        #include <wx/menuitem.h>


extern "C" {static PyObject *slot_wxMenuItemList_iterator___next__(PyObject *);}
static PyObject *slot_wxMenuItemList_iterator___next__(PyObject *sipSelf)
{
     ::wxMenuItemList_iterator *sipCpp = reinterpret_cast< ::wxMenuItemList_iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_wxMenuItemList_iterator));

    if (!sipCpp)
        return SIP_NULLPTR;


    {
        {
             ::wxMenuItem*sipRes = 0;

        sipRes = sipCpp->__next__();
        if (PyErr_Occurred())
            return NULL;

            return sipConvertFromType(sipRes,sipType_wxMenuItem,SIP_NULLPTR);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxMenuItemList_iterator(void *, int);}
static void release_wxMenuItemList_iterator(void *sipCppV, int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast< ::wxMenuItemList_iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_wxMenuItemList_iterator(sipSimpleWrapper *);}
static void dealloc_wxMenuItemList_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_wxMenuItemList_iterator(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's Python slots. */
static sipPySlotDef slots_wxMenuItemList_iterator[] = {
    {(void *)slot_wxMenuItemList_iterator___next__, next_slot},
    {0, (sipPySlotType)0}
};


sipClassTypeDef sipTypeDef__core_wxMenuItemList_iterator = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_wxMenuItemList_iterator,
        {SIP_NULLPTR},
        SIP_NULLPTR
    },
    {
        sipNameNr_MenuItemList_iterator,
        {0, 0, 1},
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    SIP_NULLPTR,
    slots_wxMenuItemList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_wxMenuItemList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_wxMenuItemList_iterator,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};