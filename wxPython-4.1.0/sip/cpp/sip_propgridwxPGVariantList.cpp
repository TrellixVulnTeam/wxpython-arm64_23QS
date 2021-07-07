/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.19
 *
 *     Copyright: (c) 2020 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_propgrid.h"




extern "C" {static void assign_wxPGVariantList(void *, SIP_SSIZE_T, void *);}
static void assign_wxPGVariantList(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::wxPGVariantList *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::wxPGVariantList *>(sipSrc);
}


extern "C" {static void *array_wxPGVariantList(SIP_SSIZE_T);}
static void *array_wxPGVariantList(SIP_SSIZE_T sipNrElem)
{
    return new  ::wxPGVariantList[sipNrElem];
}


extern "C" {static void *copy_wxPGVariantList(const void *, SIP_SSIZE_T);}
static void *copy_wxPGVariantList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::wxPGVariantList(reinterpret_cast<const  ::wxPGVariantList *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_wxPGVariantList(void *, int);}
static void release_wxPGVariantList(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast< ::wxPGVariantList *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_wxPGVariantList(PyObject *, void **, int *, PyObject *);}
static int convertTo_wxPGVariantList(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::wxPGVariantList **sipCppPtr = reinterpret_cast< ::wxPGVariantList **>(sipCppPtrV);

        // Code to test a PyObject for compatibility.
        if (!sipIsErr) {
            // Any type sequence type is okay.
            int success = PySequence_Check(sipPy);
            if (!success)
                PyErr_SetString(PyExc_TypeError, "Sequence type expected.");
            return success;
        }

        // Code to create a new wxVariantList from the PyObject sequence
        wxVariantList* value =  new wxVariantList();
        Py_ssize_t len = PySequence_Length(sipPy);
        Py_ssize_t idx = 0;
        while (idx < len) {
            PyObject* item = PySequence_GetItem(sipPy, idx);
            value->Append(new wxVariant(wxPGVariant_in_helper(item)));
            Py_DECREF(item);
        }
        *sipCppPtr = value;
        return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_wxPGVariantList(void *, PyObject *);}
static PyObject *convertFrom_wxPGVariantList(void *sipCppV, PyObject *)
{
    ::wxPGVariantList *sipCpp = reinterpret_cast< ::wxPGVariantList *>(sipCppV);

        // Code to convert a wxVariantList to a Python list.
        if (sipCpp == NULL) {
            return Py_None;
        } else {
            size_t idx = 0;
            PyObject* value = PyList_New(0);
            for (idx=0; idx < sipCpp->GetCount(); idx++) {
                PyObject* item = wxPGVariant_out_helper(sipCpp->Item(idx));
                PyList_Append(value, item);
            }
            return value;
        }
}


sipMappedTypeDef sipTypeDef__propgrid_wxPGVariantList = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_wxPGVariantList,     /* wxPGVariantList */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_wxPGVariantList,
    array_wxPGVariantList,
    copy_wxPGVariantList,
    release_wxPGVariantList,
    convertTo_wxPGVariantList,
    convertFrom_wxPGVariantList
};